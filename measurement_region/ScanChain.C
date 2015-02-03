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
  TH2D *Nt_histo = new TH2D("Nt_histo", "Nt vs Pt, Eta", 8,20,100,3,0,3);
  Nt_histo->SetDirectory(rootdir);
  Nt_histo->Sumw2();

  TH2D *Nl_histo = new TH2D("Nl_histo", "Nl vs Pt, Eta", 8,20,100,3,0,3);
  Nl_histo->SetDirectory(rootdir);
  Nl_histo->Sumw2();

  TH2D *Nt_histo_e = new TH2D("Nt_histo_e", "Nt vs Pt, Eta (electrons)", 8,20,100,3,0,3);
  Nt_histo_e->SetDirectory(rootdir);
  Nt_histo_e->Sumw2();

  TH2D *Nl_histo_e = new TH2D("Nl_histo_e", "Nl vs Pt, Eta (electrons)", 8,20,100,3,0,3);
  Nl_histo_e->SetDirectory(rootdir);
  Nl_histo_e->Sumw2();

  TH2D *Nt_histo_mu = new TH2D("Nt_histo_mu", "Nt vs Pt, Eta (muons)", 8,20,100,3,0,3);
  Nt_histo_mu->SetDirectory(rootdir);
  Nt_histo_mu->Sumw2();

  TH2D *Nl_histo_mu = new TH2D("Nl_histo_mu", "Nl vs Pt, Eta (muons)", 8,20,100,3,0,3);
  Nl_histo_mu->SetDirectory(rootdir);
  Nl_histo_mu->Sumw2();

  //----------------------

  //e determination
  float Nt = 0.;  //# of events where one lep passes tight and is prompt, and other lepton passes tight but is nonprompt
  float Nl = 0.;  //# of events where one lep passes tight and is prompt, and other lepton passes loose but fails tight  and is nonprompt
  float e = 0.; //rate = Nt/(Nt+Nl)
  float Nt_e = 0.;  
  float Nl_e = 0.; 
  float e_e = 0.;
  float Nt_mu = 0.;  
  float Nl_mu = 0.; 
  float e_mu = 0.;
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

	  //------------------------------------------------------------------------------------------
	  //---------------------------------Find e = f(const)---------------------------------------
	  //------------------------------------------------------------------------------------------

 	  //Find ratio of nonprompt leps passing tight to nonprompt leps passing at least loose.  This is the fake rate 
	  // Use lep_passes_id to see if num.  Use FO to see if Fakable Object (denom)
	  //Calculate e=Nt/(Nl) where l->loose  (as opposed to loose-not-tight).
	  
	  //Using gen level info to see if prompt -> no prompt contamination in measurement region
	  //everything else is RECO (p4, id, passes_id, FO, etc.)
	  
	  for(int i =0; i < ss.el_p4().size(); i++)
		{
		  if( ss.el_motherID()[i] != 1 )  //if el is nonprompt
			{
			  if( abs( ss.el_id()[i] ) == 11 ) //already know it's an el.  Need?  Reco ID or Gen ID? Using RECO.
				{
				  if( ss.el_passes_id()[i] )  //if el is tight
					{ 
					  Nt = Nt + weight;
					  Nt_e = Nt_e + weight;
					}
				  if( ss.el_FO()[i] )
					{
					  Nl = Nl + weight;     //l now means loose, as opposed to loose-not-tight
					  Nl_e = Nl_e + weight;
					}
				}
			} 
		}
	  for(int i =0; i < ss.mu_p4().size(); i++)
		{
		  if( ss.mu_motherID()[i] != 1 )  //if mu is nonprompt
			{
			  if( abs( ss.mu_id()[i] ) == 13 ) //already know it's an mu.  Need?
				{
				  if( ss.mu_passes_id()[i] )  //if mu is tight
					{ 
					  Nt = Nt + weight;
					  Nt_mu = Nt_mu + weight;
					}
				  if( ss.mu_FO()[i] )
					{
					  Nl = Nl + weight;       //l now means loose, as opposed to loose-not-tight
					  Nl_mu = Nl_mu + weight;
					}
				}
			} 
		}
	  //---------------------------------------------------------------------------------------------------------------------------

	  //------------------------------------------------------------------------------------------
	  //---------------------------------Find e = f(Pt,eta)---------------------------------------
	  //------------------------------------------------------------------------------------------

	  //Find ratio of nonprompt leps passing tight to nonprompt leps passing at least loose.  This is the fake rate 
	  // Use lep_passes_id to see if num.  Use FO to see if Fakable Object (denom)
	  //Calculate e=Nt/(Nl) where l->loose  (as opposed to loose-not-tight).
	  
	  //Using gen level info to see if prompt -> no prompt contamination in measurement region
	  //everything else is RECO (p4, id, passes_id, FO, etc.)
	  
	  for(int i =0; i < ss.el_p4().size(); i++)  // <-- Using RECO p4
		{
		  if( ss.el_motherID()[i] != 1 )  //if el is nonprompt (GEN info)
			{
			  if( abs( ss.el_id()[i] ) == 11 ) // <-- Using RECO ID
				{
				  if( ss.el_passes_id()[i] )  //if el is tight
					{ 
					  Nt_histo->Fill(ss.el_p4()[i].pt(), ss.el_p4()[i].eta(), weight);     //fill histo with fake pt, eta
					  Nt_histo_e->Fill(ss.el_p4()[i].pt(), ss.el_p4()[i].eta(), weight);   //
					}
				  if( ss.el_FO()[i] )  //if el is FO
					{
					  Nl_histo->Fill(ss.el_p4()[i].pt(), ss.el_p4()[i].eta(), weight);     //fill histo with fake pt, eta 
					  Nl_histo_e->Fill(ss.el_p4()[i].pt(), ss.el_p4()[i].eta(), weight);   //  <-- loose (as opposed to l!t)			
					}
				}
			} 
		}
	  for(int i =0; i < ss.mu_p4().size(); i++)  // <-- Using RECO p4
		{
		  if( ss.mu_motherID()[i] != 1 )  //if mu is nonprompt (GEN info)
			{
			  if( abs( ss.mu_id()[i] ) == 13 ) // <-- Using RECO ID!!!
				{
				  if( ss.mu_passes_id()[i] )  //if mu is tight
					{ 
					  Nt_histo->Fill(ss.mu_p4()[i].pt(), ss.mu_p4()[i].eta(), weight);     //fill histo with fake pt, eta
					  Nt_histo_mu->Fill(ss.mu_p4()[i].pt(), ss.mu_p4()[i].eta(), weight);   //fill histo with fake pt, eta
					}
				  if( ss.mu_FO()[i] )
					{
					  Nl_histo->Fill(ss.mu_p4()[i].pt(), ss.mu_p4()[i].eta(), weight);     //fill histo with fake pt, eta  <-- loose (not l!t)
					  Nl_histo_mu->Fill(ss.mu_p4()[i].pt(), ss.mu_p4()[i].eta(), weight);  // <-- loose (not l!t)			
					}
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

  //  e = Nt/(Nt+Nl);
  e = Nt/(Nl);
  //  e_e = Nt_e/(Nt_e+Nl_e);
  e_e = Nt_e/(Nl_e);
  //  e_mu = Nt_mu/(Nt_mu+Nl_mu);
  e_mu = Nt_mu/(Nl_mu);

  cout<<"\nReco: "<<"Nt = "<<Nt<<", Nl = "<<Nl<<", e ="<<e<<endl;
  cout<<"\nReco (el): "<<"Nt = "<<Nt_e<<", Nl = "<<Nl_e<<", e ="<<e_e<<endl;
  cout<<"\nReco (mu): "<<"Nt = "<<Nt_mu<<", Nl = "<<Nl_mu<<", e ="<<e_mu<<endl<<endl;


  //Histograms
  TH2D *rate_histo = (TH2D*) Nt_histo->Clone("rate_histo");
  TH2D *rate_histo_e = (TH2D*) Nt_histo_e->Clone("rate_histo_e");
  TH2D *rate_histo_mu = (TH2D*) Nt_histo_mu->Clone("rate_histo_mu");
  
  rate_histo->Divide(rate_histo,Nl_histo,1,1,"B");
  rate_histo_e->Divide(rate_histo_e,Nl_histo_e,1,1,"B");
  rate_histo_mu->Divide(rate_histo_mu,Nl_histo_mu,1,1,"B");

  rate_histo->GetXaxis()->SetTitle("pT (GeV)"); 
  rate_histo->GetYaxis()->SetTitle("eta");
  rate_histo->GetZaxis()->SetRangeUser(0,1.);
  rate_histo->SetTitle("Fake Rate vs Pt, Eta");
  rate_histo_e->GetXaxis()->SetTitle("pT (GeV)"); 
  rate_histo_e->GetYaxis()->SetTitle("eta");
  rate_histo_e->GetZaxis()->SetRangeUser(0,1.);
  rate_histo_e->SetTitle("Fake Rate vs Pt, Eta (electrons)");
  rate_histo_mu->GetXaxis()->SetTitle("pT (GeV)"); 
  rate_histo_mu->GetYaxis()->SetTitle("eta");
  rate_histo_mu->GetZaxis()->SetRangeUser(0,1.);
  rate_histo_mu->SetTitle("Fake Rate vs Pt, Eta (muons)");

  gStyle->SetOptStat(0);
  gStyle->SetPaintTextFormat("1.3f");

  TCanvas *c0=new TCanvas("c0","Fake Rate vs Pt, eta",800,800);
  //  rate_histo->Draw("LEGO1");
  rate_histo->Draw("colz,texte");
  TCanvas *c1=new TCanvas("c1","Fake Rate vs Pt, eta (electron)",800,800);
  //  rate_histo_e->Draw("LEGO1");
  rate_histo_e->Draw("colz,texte");
  TCanvas *c2=new TCanvas("c2","Fake Rate vs Pt, eta (muon)",800,800);
  //  rate_histo_mu->Draw("LEGO1");
  rate_histo_mu->Draw("colz,texte");

  //---save histos-------//
  TFile *OutputFile = new TFile("./rate_histos.root","recreate");
  OutputFile->cd();
  rate_histo->Write();
  rate_histo_e->Write();
  rate_histo_mu->Write();

  OutputFile->Close();

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