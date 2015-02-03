// Usage:
// > root -b doAll.C

// C++
#include <iostream>
#include <iomanip>
#include <vector>

// ROOT
#include "TBenchmark.h"
#include "TChain.h"
#include "TDirectory.h"
#include "TFile.h"
#include "TROOT.h"
#include "TTreeCache.h"
#include "TH2D.h"
#include "TCanvas.h"
#include "TStyle.h"

// lepfilter
#include "lepfilter.cc"

using namespace std;
using namespace samesign;

int ScanChain( TChain* chain, bool fast = true, int nEvents = -1, string skimFilePrefix = "test") {

  // Benchmark
  TBenchmark *bmark = new TBenchmark();
  bmark->Start("benchmark");

  // Example Histograms
  TDirectory *rootdir = gDirectory->GetDirectory("Rint:");

  // TH1F *samplehisto = new TH1F("samplehisto", "Example histogram", 200,0,200);
  // samplehisto->SetDirectory(rootdir);
  // //Sumw2()!

  //---Load rate histos-----//
  TFile *InputFile = new TFile("../measurement_region/rate_histos.root","read");
  TH2D *rate_histo = (TH2D*) InputFile->Get("rate_histo")->Clone("rate_histo");
  TH2D *rate_histo_e = (TH2D*) InputFile->Get("rate_histo_e")->Clone("rate_histo_e");
  TH2D *rate_histo_mu = (TH2D*) InputFile->Get("rate_histo_mu")->Clone("rate_histo_mu");

  //----------------------
  float prompt2_gen = 0.;  //2 prompt leptons in ss pairs
  float prompt2_reco = 0.;  //2 prompt leptons in ss pairs
  float prompt1_gen = 0.;  //1 prompt leptons in ss pairs
  float prompt1_reco = 0.;  //1 prompt leptons in ss pairs
  float prompt0_gen = 0.;  //0 prompt leptons in ss pairs
  float prompt0_reco = 0.;  //0 prompt leptons in ss pairs
  float sign_misid_gen = 0.;
  float sign_misid_reco = 0.;
  float Nss_gen=0.;
  float Nss_reco=0.;
  float NpromptL1_reco=0.;
  float NpromptL1_gen=0.;
  float NpromptL2_reco=0.;
  float NpromptL2_gen=0.;
  //----------------------

  //e determination
  float Npn = 0.;
  float Nnn = 0.;
   float e = 0.; //rate = Nt/(Nt+Nl)
  float e1 = 0.; //rate = Nt/(Nt+Nl)
  float e2 = 0.; //rate = Nt/(Nt+Nl)
  //----------------

  // Loop over events to Analyze
  unsigned int nEventsTotal = 0;
  unsigned int nEventsChain = chain->GetEntries();
  if( nEvents >= 0 ) nEventsChain = nEvents;
  TObjArray *listOfFiles = chain->GetListOfFiles();
  TIter fileIter(listOfFiles);
  TFile *currentFile = 0;

  // File Loop
  while ( (currentFile = (TFile*)fileIter.Next()) ) {

    // Get File Content
    TFile *file = new TFile( currentFile->GetTitle() );
    TTree *tree = (TTree*)file->Get("t");
    if(fast) TTreeCache::SetLearnEntries(10);
    if(fast) tree->SetCacheSize(128*1024*1024);
    ss.Init(tree);
    
    // Loop over Events in current file
    if( nEventsTotal >= nEventsChain ) continue;
    unsigned int nEventsTree = tree->GetEntriesFast();
    for( unsigned int event = 0; event < nEventsTree; ++event) {
    
      // Get Event Content
      if( nEventsTotal >= nEventsChain ) continue;
      if(fast) tree->LoadTree(event);
      ss.GetEntry(event);
      ++nEventsTotal;
    
      // Progress
      lepfilter::progress( nEventsTotal, nEventsChain );
	  
      // Analysis Code
	  float weight = ss.scale1fb()*10.0;
	  
	  if( !( ss.lep1_p4().pt() > 20 && ss.lep2_p4().pt() > 20  && ss.njets() >= 2 && (ss.ht() > 500 ? 1 : ss.met() > 30) ) )
	  	{
	  	  {continue;}
	  	} 
	  
	  if (ss.hyp_class() == 3)
		{
		  //-----------------------------------------------------------------------
		  //check for charge misID on reco level.
		  if( ss.lep1_id()*ss.lep2_id() < 0 )
			{
			  //it's an opp sign pair
			  sign_misid_reco = sign_misid_reco + weight;
			}
		  else
			{
			  Nss_reco = Nss_reco + weight;
			  //It's a same sign pair.
			  if( ss.lep1_motherID()==1 && ss.lep2_motherID()==1 )
				{
				  prompt2_reco = prompt2_reco + weight;
				  NpromptL1_reco = NpromptL1_reco + weight;
				  NpromptL2_reco = NpromptL2_reco + weight;
				}
			  else if( ss.lep1_motherID()==1 && ss.lep2_motherID()!=1 )
				{
				  prompt1_reco = prompt1_reco + weight;  //Nnn.  What I'm interested in
				  NpromptL1_reco = NpromptL1_reco + weight;				
				}
			  else if( ss.lep1_motherID()!=1 && ss.lep2_motherID()==1 )
				{
				  prompt1_reco = prompt1_reco + weight;  //Nnn.  What I'm interested in
				  NpromptL2_reco = NpromptL2_reco + weight;				
				}
			  else if( (ss.lep1_motherID()!=1 && ss.lep2_motherID()!=1) ) //don't need to explicitly write it.  can just use else
				{
				  prompt0_reco = prompt0_reco + weight;
				}
			}
		  //----------------------------------------------------------------------------------
			  
		  //----------------------------------------------------------------------------------
		  //check for charge misID on gen level.
		  if( ss.lep1_mc_id()*ss.lep2_mc_id() < 0 )
			{
			  //it's an opp sign pair
			  sign_misid_gen = sign_misid_gen + weight;
			}
		  else
			{
			  Nss_gen = Nss_gen + weight;
			  //It's a same sign pair.  shouldn't =0
			  if( ss.lep1_motherID()==1 && ss.lep2_motherID()==1 )
				{
				  prompt2_gen = prompt2_gen + weight;
				  NpromptL1_gen = NpromptL1_gen + weight;
				  NpromptL2_gen = NpromptL2_gen + weight;
				}
			  else if( ss.lep1_motherID()==1 && ss.lep2_motherID()!=1 )
				{
				  prompt1_gen = prompt1_gen + weight;
				  NpromptL1_gen = NpromptL1_gen + weight;
				}
			  else if( ss.lep1_motherID()!=1 && ss.lep2_motherID()==1 )
				{
				  prompt1_gen = prompt1_gen + weight;
				  NpromptL2_gen = NpromptL2_gen + weight;
				}
				  
			  else if( (ss.lep1_motherID()!=1 && ss.lep2_motherID()!=1) ) //don't need to explicitly write it.  can just use else
				{prompt0_gen = prompt0_gen + weight;}
			}
		  //----------------------------------------------------------------------------------
		} //end hyp = 3 loop

	  //--------------------------------------------------------------------------------------
	  //-------------------------Estimate Npn from QCD fake rate------------------------------
	  //--------------------------------------------------------------------------------------
	  //find N^pn_tt using N_tl and e(pT, eta).  DONT USE GEN LEVEL INFO HERE!!!

	  e1 = 0.; //rate for lep1
	  e2 = 0.; //rate for lep2
	  
	  if( ss.hyp_class() == 2 )  //if tight-loose!tight
		{
		  //make sure ss on reco level. 
		  if( ss.lep1_id()*ss.lep2_id() > 0 )
			{			  
			  if( ss.lep1_passes_id() && !ss.lep2_passes_id() )  //lep1 is tight, lep2 is loose-not-tight
				{	
				  if( abs(ss.lep2_id()) == 11 )  //if el, use el rate.  FILL WITH NONPROMPT
					{e2 = rate_histo_e->GetBinContent( rate_histo_e->FindBin(ss.lep2_p4().pt(), ss.lep2_p4().eta()) );}
				  else if( abs(ss.lep2_id()) == 13 )  //if my, use mu rate.  FILL WITH NONPROMPT
					{e2 = rate_histo_mu->GetBinContent( rate_histo_mu->FindBin(ss.lep2_p4().pt(), ss.lep2_p4().eta()) );}
				  Npn = Npn + (e2/(1-e2))*weight;	
				}
			  else if( !ss.lep1_passes_id() && ss.lep2_passes_id() )   //lep1 is loose-not-tight, lep2 is tight
				{
				  if( abs(ss.lep1_id()) == 11 )	//if el, use el rate.  FILL WITH NONPROMPT			  
					{e1 = rate_histo_e->GetBinContent( rate_histo_e->FindBin(ss.lep1_p4().pt(), ss.lep1_p4().eta()) );}
				  else if( abs(ss.lep1_id()) == 13 ) //if mu, use mu rate.  FILL WITH NONPROMPT				  
					{e1 = rate_histo_mu->GetBinContent( rate_histo_mu->FindBin(ss.lep1_p4().pt(), ss.lep1_p4().eta()) );}
				  Npn = Npn + (e1/(1-e1))*weight;				
				}
			}
		}
	  else if( ss.hyp_class() == 1 )
		{
		  if( ss.lep1_id()*ss.lep2_id() > 0 )
			{
              if( !ss.lep1_passes_id() && !ss.lep2_passes_id() )   //just making sure
			   {
				  if( abs(ss.lep2_id()) == 11 )
					{e2 = rate_histo_e->GetBinContent( rate_histo_e->FindBin(ss.lep2_p4().pt(), ss.lep2_p4().eta()) );}
				  else if( abs(ss.lep2_id()) == 13 )
					{e2 = rate_histo_mu->GetBinContent( rate_histo_mu->FindBin(ss.lep2_p4().pt(), ss.lep2_p4().eta()) );}				
				  if( abs(ss.lep1_id()) == 11 )				  
					{e1 = rate_histo_e->GetBinContent( rate_histo_e->FindBin(ss.lep1_p4().pt(), ss.lep1_p4().eta()) );}
				  else if( abs(ss.lep1_id()) == 13 )				  
					{e1 = rate_histo_mu->GetBinContent( rate_histo_mu->FindBin(ss.lep1_p4().pt(), ss.lep1_p4().eta()) );}
				  Nnn = Nnn + (e1/(1-e1))*(e2/(1-e2))*weight;					
			   }
			}
		}
	  


	  //---------------------------------------------------------------------------------------------------------------------------

	  
	}//end event loop
  
    // Clean Up
    delete tree;
    file->Close();
    delete file;
  }
  if ( nEventsChain != nEventsTotal ) {
    cout << Form( "ERROR: number of events from files (%d) is not equal to total number of events (%d)", nEventsChain, nEventsTotal ) << endl;
  }

  cout<<"\n"<<"Hyp_type = 3 (Both leptons pass tight selection)"<<endl;
  cout<<"---------------------------------------------"<<endl;
  cout<<setw(15)<<""<<setw(15)<<"Reco Level"<<setw(15)<<"Gen Level"<<endl;
  cout<<setw(15)<<"ss prompt2"<<setw(15)<<prompt2_reco<<setw(15)<<prompt2_gen<<endl;
  cout<<setw(15)<<"ss prompt1"<<setw(15)<<prompt1_reco<<setw(15)<<prompt1_gen<<endl;
  cout<<setw(15)<<"ss prompt0"<<setw(15)<<prompt0_reco<<setw(15)<<prompt0_gen<<endl;
  cout<<setw(15)<<"charge misID"<<setw(15)<<sign_misid_reco<<setw(15)<<sign_misid_gen<<endl;
  cout<<setw(15)<<"Nss"<<setw(15)<<Nss_reco<<setw(15)<<Nss_gen<<endl;
  cout<<"---------------------------------------------"<<endl;
  cout<<setw(15)<<"Nprompt L1"<<setw(15)<<NpromptL1_reco<<setw(15)<<NpromptL1_gen<<endl;
  cout<<setw(15)<<"Nprompt L2"<<setw(15)<<NpromptL2_reco<<setw(15)<<NpromptL2_gen<<endl;
  cout<<"---------------------------------------------"<<endl;

  // cout<<"\nnum_hyp_1:"<<num_hyp_1<<endl;
  // cout<<"num_ll:"<<num_ll<<endl;

  cout<<setw(25)<<" "<<setw(10)<<"EST"<<setw(10)<<"GEN"<<setw(10)<<"EST/GEN"<<endl;
  cout<<setw(25)<<"Npn:"<<setw(10)<<Npn<<setw(10)<<prompt1_reco<<setw(10)<<Npn/prompt1_reco<<endl;
  cout<<setw(25)<<"Nnn:"<<setw(10)<<Nnn<<setw(10)<<prompt0_reco<<setw(10)<<Nnn/prompt0_reco<<endl;

  gStyle->SetOptStat(0);
  gStyle->SetPaintTextFormat("1.3f");

  TCanvas *c0=new TCanvas("c0","Fake Rate vs Pt, eta",800,800);
  rate_histo->Draw("colz,texte");
  TCanvas *c1=new TCanvas("c1","Fake Rate vs Pt, eta (electron)",800,800);
  rate_histo_e->Draw("colz,texte");
  TCanvas *c2=new TCanvas("c2","Fake Rate vs Pt, eta (muon)",800,800);
  rate_histo_mu->Draw("colz,texte");

  // return
  bmark->Stop("benchmark");
  cout << endl;
  cout << nEventsTotal << " Events Processed" << endl;
  cout << "------------------------------" << endl;
  cout << "CPU  Time:	" << Form( "%.01f", bmark->GetCpuTime("benchmark")  ) << endl;
  cout << "Real Time:	" << Form( "%.01f", bmark->GetRealTime("benchmark") ) << endl;
  cout << endl;
  delete bmark;
  return 0;
}
