#include "TChain.h"
#include "TFile.h"
#include "TTree.h"
#include "TRandom.h"
#include "TF1.h"
#include "Math/VectorUtil.h"
#include <vector>

#include "include/CMS2.h"
#include "include/selections.h"
#include "include/structAG.h"
//#include "MT2AG.h"
#include "looper.h" 
#include "include/fromCore.h"
#include "include/structAG.h"

typedef ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > LorentzVector;
typedef vector<pair<const LorentzVector *, double> > jets_with_corr_t;

using namespace std;

//Switches
char* path = "../fake_rate_output/V00-00-00";
bool verbose = 0;
unsigned int evt_cut = 74994186;

//Classes
class babyMaker {

  public:
    void MakeBabyNtuple(const char* output_name);
    void InitBabyNtuple();
    int looper(TChain* chain, char* output_name, int nEvents = -1, string signal_in = "");
  //    hyp_result_t chooseBestHyp();
  //    int isGoodHyp(int iHyp, int analType = 2);
  //    particle_t getThirdLepton(int hyp);

  protected:
    TFile* BabyFile;
    TTree* BabyTree;

  private:

    //for tree
    float met;
    float metPhi;
    int event;
    int lumi;
    int run;
    bool filt_csc;
    bool filt_hbhe;
    bool filt_hcallaser;
    bool filt_ecaltp;
    bool filt_trkfail;
    bool filt_eebadsc;
    bool is_real_data;
    float scale1fb;     
    float xsec;         
    float kfactor;      
    float gen_met;      
    float gen_met_phi;  
    float njets;  //<----------------------need
    float ht;  //<----------------------need
    int nbtags_uncorr;  //<----------------------maybe???
    vector <LorentzVector> jets;  //<----------------------maybe???
    vector <LorentzVector> btags_p4_uncorr;  //<----------------------maybe???
    vector <LorentzVector> btags;  //<----------------------maybe???
    int nbtags;   //<----------------------maybe???
    float mt;  //<----------------------maybe???
    vector <float> btags_disc_uncorr;   //<----------------------maybe???
    vector <float> jets_disc;
    vector <float> btags_disc;
    TString sample;
    vector <LorentzVector> genps_p4;  //<----------------------maybe??? 
    vector <int> genps_id;  //<----------------------maybe???
    vector <int> genps_id_mother;  //<----------------------maybe???
    vector <int> genps_status;  //<----------------------maybe???
	vector <int> genps_id_grandma;  //<----------------------maybe???
  //-------------------//
  //------MINE---------//
      //---els---//
  vector<LorentzVector> el_p4;
  vector<LorentzVector> el_mc_p4;
  vector<LorentzVector> el_mc_motherp4;
  vector<int> el_id; 
  vector<int> el_idx;
  vector<float> el_d0; //dxy?
  vector<float> el_dZ;
  vector<float> el_d0_err;
  vector<int> el_motherID;
  vector<int> el_mc_id;
  vector<float> el_iso; //RelIso03 (EA?)
  vector<bool> el_passes_id;
  vector<bool> el_FO;
  vector<float> el_sigmaIEtaIEta_full5x5;//below
  vector<float> el_etaSC;
  vector<float> el_dEtaIn;
  vector<float> el_dPhiIn;
  vector<float> el_hOverE;
  vector<float> el_ip3d;
  vector<float> el_ip3derr;
  vector<float> el_ecalEnergy;
  vector<float> el_eOverPIn;
  vector<bool> el_conv_vtx_flag;
  vector<int> el_exp_innerlayers;
  vector<int> el_charge;
  vector<int> el_sccharge;
  vector<int> el_ckf_charge;
  vector<int> el_trk_charge;
  vector<bool> el_threeChargeAgree;
  vector<int> el_type;

      //---mus---//
  vector<LorentzVector> mu_p4;
  vector<LorentzVector> mu_mc_p4;
  vector<LorentzVector> mu_mc_motherp4;
  vector<int> mu_id; 
  vector<int> mu_idx;
  vector<float> mu_d0; //dxy?
  vector<float> mu_dZ;
  vector<float> mu_d0_err;
  vector<int> mu_motherID;
  vector<int> mu_mc_id;
  vector<float> mu_iso;  //RelIso03 (EA?)
  vector<bool> mu_passes_id;
  vector<bool> mu_FO; 
  vector<int> mu_type; //below
  vector<int> mu_pid_PFMuon;
  vector<float> mu_gfit_chi2;
  vector<int> mu_gfit_validSTAHits;
  vector<int> mu_numberOfMatchedStations;
  vector<int> mu_validPixelHits;
  vector<int> mu_nlayers;
  vector<float> mu_ip3d;
  vector<float> mu_ip3derr;
  //---------------------
    
};

//Main functions
void babyMaker::MakeBabyNtuple(const char* output_name){

  //Create Baby
  TDirectory *rootdir = gDirectory->GetDirectory("Rint:");
  rootdir->cd();
  BabyFile = new TFile(Form("%s/%s", path, output_name), "RECREATE");
  BabyFile->cd();
  BabyTree = new TTree("t", "SS2015 Baby Ntuple");

  //Define Branches
  BabyTree->Branch("met", &met);
  BabyTree->Branch("metPhi", &metPhi);
  BabyTree->Branch("event", &event);
  BabyTree->Branch("lumi", &lumi);
  BabyTree->Branch("run", &run);
  BabyTree->Branch("filt_csc", &filt_csc);
  BabyTree->Branch("filt_hbhe", &filt_hbhe);
  BabyTree->Branch("filt_hcallaser", &filt_hcallaser);
  BabyTree->Branch("filt_ecaltp", &filt_ecaltp);
  BabyTree->Branch("filt_trkfail", &filt_trkfail);
  BabyTree->Branch("filt_eebadsc", &filt_eebadsc);
  BabyTree->Branch("is_real_data", &is_real_data);
  BabyTree->Branch("scale1fb", &scale1fb);
  BabyTree->Branch("xsec", &xsec);
  BabyTree->Branch("kfactor", &kfactor);
  BabyTree->Branch("gen_met", &gen_met);
  BabyTree->Branch("gen_met_phi", &gen_met_phi);
  BabyTree->Branch("njets", &njets);
  BabyTree->Branch("ht", &ht);
  BabyTree->Branch("nbtags_uncorr", &nbtags_uncorr);
  BabyTree->Branch("jets", &jets);
  BabyTree->Branch("jets_disc", &jets_disc);
  BabyTree->Branch("btags_p4_uncorr", &btags_p4_uncorr);
  BabyTree->Branch("btags_disc_uncorr", &btags_disc_uncorr);
  BabyTree->Branch("btags", &btags);
  BabyTree->Branch("btags_disc", &btags_disc);
  BabyTree->Branch("nbtags", &nbtags);
  BabyTree->Branch("mt", &mt);
  BabyTree->Branch("sample", &sample);
  BabyTree->Branch("genps_p4", &genps_p4);
  BabyTree->Branch("genps_id", &genps_id);
  BabyTree->Branch("genps_id_mother", &genps_id_mother);
  BabyTree->Branch("genps_status", &genps_status);
  BabyTree->Branch("genps_id_grandma", &genps_id_grandma);
  //--------------------MINE----------------------------
         //---els---//
  BabyTree->Branch("el_p4", &el_p4);
  BabyTree->Branch("el_mc_p4", &el_mc_p4);
  BabyTree->Branch("el_mc_motherp4", &el_mc_motherp4);
  BabyTree->Branch("el_id", &el_id);
  BabyTree->Branch("el_idx", &el_idx);
  BabyTree->Branch("el_d0", &el_d0);
  BabyTree->Branch("el_dZ", &el_dZ);
  BabyTree->Branch("el_d0_err", &el_d0_err);
  BabyTree->Branch("el_motherID", &el_motherID);
  BabyTree->Branch("el_mc_id", &el_mc_id);
  BabyTree->Branch("el_iso", &el_iso);
  BabyTree->Branch("el_passes_id", &el_passes_id);
  BabyTree->Branch("el_FO", &el_FO);
  BabyTree->Branch("el_sigmaIEtaIEta_full5x5", &el_sigmaIEtaIEta_full5x5);//below
  BabyTree->Branch("el_etaSC", &el_etaSC);
  BabyTree->Branch("el_dEtaIn", &el_dEtaIn);
  BabyTree->Branch("el_dPhiIn", &el_dPhiIn);
  BabyTree->Branch("el_hOverE", &el_hOverE);
  BabyTree->Branch("el_ip3d", &el_ip3d);
  BabyTree->Branch("el_ip3derr", &el_ip3derr);
  BabyTree->Branch("el_ecalEnergy", &el_ecalEnergy);
  BabyTree->Branch("el_eOverPIn", &el_eOverPIn);
  BabyTree->Branch("el_conv_vtx_flag", &el_conv_vtx_flag);
  BabyTree->Branch("el_exp_innerlayers", &el_exp_innerlayers);
  BabyTree->Branch("el_charge", &el_charge);
  BabyTree->Branch("el_sccharge", &el_sccharge);
  BabyTree->Branch("el_ckf_charge", &el_ckf_charge);
  BabyTree->Branch("el_threeChargeAgree", &el_threeChargeAgree);
  BabyTree->Branch("el_type", &el_type);

         //---mus---//
  BabyTree->Branch("mu_p4", &mu_p4);
  BabyTree->Branch("mu_mc_p4", &mu_mc_p4);
  BabyTree->Branch("mu_mc_motherp4", &mu_mc_motherp4);
  BabyTree->Branch("mu_id", &mu_id);
  BabyTree->Branch("mu_idx", &mu_idx);
  BabyTree->Branch("mu_d0", &mu_d0);
  BabyTree->Branch("mu_dZ", &mu_dZ);
  BabyTree->Branch("mu_d0_err", &mu_d0_err);
  BabyTree->Branch("mu_motherID", &mu_motherID);
  BabyTree->Branch("mu_mc_id", &mu_mc_id);
  BabyTree->Branch("mu_iso", &mu_iso);
  BabyTree->Branch("mu_passes_id", &mu_passes_id);
  BabyTree->Branch("mu_FO", &mu_FO);
  BabyTree->Branch("mu_type", &mu_type); //below
  BabyTree->Branch("mu_pid_PFMuon", &mu_pid_PFMuon);
  BabyTree->Branch("mu_gfit_chi2", &mu_gfit_chi2);
  BabyTree->Branch("mu_gfit_validSTAHits", &mu_gfit_validSTAHits);
  BabyTree->Branch("mu_numberOfMatchedStations", &mu_numberOfMatchedStations);
  BabyTree->Branch("mu_validPixelHits", &mu_validPixelHits);
  BabyTree->Branch("mu_nlayers", &mu_nlayers);
  BabyTree->Branch("mu_ip3d", &mu_ip3d);
  BabyTree->Branch("mu_ip3derr", &mu_ip3derr);
  //----------------------------------------------------
}

void babyMaker::InitBabyNtuple(){

    //Gen variables
    met = -1;
    metPhi = -1;
    event = -1;
    lumi = -1;
    run = -1;
    filt_csc = 0;
    filt_hbhe = 0;
    filt_hcallaser = 0;
    filt_ecaltp = 0;
    filt_trkfail = 0;
    filt_eebadsc = 0;
    is_real_data = 0;
    scale1fb = -1;
    xsec = -1;
    kfactor = -1;
    gen_met = -1;
    gen_met_phi = -1;
    njets = -1;
    ht = -1;
    nbtags_uncorr = -1;
    jets.clear();
	jets_disc.clear();
    btags_p4_uncorr.clear();
    btags_disc_uncorr.clear();
    btags.clear();
    btags_disc.clear();
    nbtags = -1;
    mt = -1;
    sample = "";
    genps_p4.clear();
    genps_id.clear();
    genps_id_mother.clear();
    genps_status.clear();
    genps_id_grandma.clear();
	//--------MINE------------
         //---els---//
	el_p4.clear();
	el_mc_p4.clear();
	el_mc_motherp4.clear();
	el_id.clear(); 
	el_idx.clear();
	el_d0.clear();
	el_dZ.clear();
	el_d0_err.clear();
	el_motherID.clear();
    el_mc_id.clear();
	el_iso.clear();
	el_passes_id.clear();
	el_FO.clear();
	el_sigmaIEtaIEta_full5x5.clear();//below
	el_etaSC.clear();
	el_dEtaIn.clear();
	el_dPhiIn.clear();
	el_hOverE.clear();
	el_ip3d.clear();
	el_ip3derr.clear();
	el_ecalEnergy.clear();
	el_eOverPIn.clear();
	el_conv_vtx_flag.clear();
	el_exp_innerlayers.clear();
	el_charge.clear();
	el_sccharge.clear();
	el_ckf_charge.clear();
	el_trk_charge.clear();
	el_threeChargeAgree.clear();
	el_type.clear();
         //---mus---//
	mu_p4.clear();
	mu_mc_p4.clear();
	mu_mc_motherp4.clear();
	mu_id.clear(); 
    mu_idx.clear();
	mu_d0.clear();
    mu_dZ.clear();
	mu_d0_err.clear();
	mu_motherID.clear();
	mu_mc_id.clear();
	mu_iso.clear();
	mu_passes_id.clear();
	mu_FO.clear();
	mu_type.clear(); //below
	mu_pid_PFMuon.clear();
	mu_gfit_chi2.clear();
	mu_gfit_validSTAHits.clear();
	mu_numberOfMatchedStations.clear();
	mu_validPixelHits.clear();
	mu_nlayers.clear();
	mu_ip3d.clear();
	mu_ip3derr.clear();
	//------------------------
} 


template <typename T> int sgn(T val){
    return (T(0) < val) - (val < T(0));
}

double calculateMt(const LorentzVector p4, double met, double met_phi){
  float phi1 = p4.Phi();
  float phi2 = met_phi;
  float Et1  = p4.Et();
  float Et2  = met;
  return sqrt(2*Et1*Et2*(1.0 - cos(phi1-phi2)));
}

int lepMotherID(Lep lep){
  if (tas::evt_isRealData()) return 1;
  else if (isFromZ(lep) || isFromW(lep)){
    if (sgn(lep.pdgId()) == sgn(lep.mc_id())) return 1;
    else return 2;
  }
  else if (isFromB(lep)) return -1;
  else if (isFromC(lep)) return -2;
  return 0;
}

float leptonD0(const int id, const int idx){
    if (abs(id)==13) return tas::mus_dxyPV().at(idx); 
    else if (abs(id)==11) return tas::els_dxyPV().at(idx);   
    return -999999.0;
}

float leptonD0err(const int id, const int idx){
    if (abs(id)==13) return tas::mus_d0Err().at(idx); 
    else if (abs(id)==11) return tas::els_d0Err().at(idx);   
    return -999999.0;
}

float leptonDZ(const int id, const int idx){
    if (abs(id) == 11) return tas::els_dzPV().at(idx);
    if (abs(id) == 13) return tas::mus_dzPV().at(idx);
    return -999999.0;
}

//Main function
int babyMaker::looper(TChain* chain, char* output_name, int nEvents, string signal_in){

  //Print warning!
  cout << "Careful!! Path is " << path << endl;

 //Make Baby Ntuple  
  MakeBabyNtuple( Form("%s.root", output_name) );
  
  //Initialize Baby Ntuple
  InitBabyNtuple();

  //Set up loop over chain
  unsigned int nEventsDone = 0;
  unsigned int nEventsToDo = chain->GetEntries();
  if( nEvents >= 0 ) nEventsToDo = nEvents;
  TObjArray *listOfFiles = chain->GetListOfFiles();
  TIter fileIter(listOfFiles);
  TFile *currentFile = 0;
 
  // File Loop
  while ( (currentFile = (TFile*)fileIter.Next()) ) { 

    // Get File Content
    if(nEventsDone >= nEventsToDo) continue;
    TFile *file = new TFile( currentFile->GetTitle() );
    TTree *tree = (TTree*)file->Get("Events");
    cms2.Init(tree);
  
    // Loop over Events in current file
    unsigned int nEventsTree = tree->GetEntriesFast();
    for(unsigned int evt = 0; evt < nEventsTree; evt++){
	  
	  //cout<<"\nEvent loop again"<<endl;	  

      // Get Event Content
      if(nEventsDone >= nEventsToDo) continue;   
      cms2.GetEntry(evt);
      nEventsDone++;

      //Initialize variables
      InitBabyNtuple();
     
      //Local variables
      bool isData = tas::evt_isRealData();
        
      // Progress
      CMS2::progress(nEventsDone, nEventsToDo);

      //Debug mode
      if (verbose && tas::evt_event() != evt_cut) continue;
      if (verbose) cout << "file name is " << file->GetName() << endl;

      // //Preliminary stuff
	  if (tas::mus_dxyPV().size() != tas::mus_dzPV().size()) continue;  //idk what this is

      //Fill Easy Variables
      met = cms2.evt_pfmet();
      metPhi = cms2.evt_pfmetPhi();
      event = tas::evt_event();
      lumi = tas::evt_lumiBlock();
      run = tas::evt_run();
      is_real_data = tas::evt_isRealData();
      xsec = tas::evt_xsec_incl();
      kfactor = tas::evt_kfactor();
      gen_met = tas::gen_met();
      gen_met_phi = tas::gen_metPhi();
      sample = Form("%s", file->GetName());

      //Fill data vs. mc variables
      filt_csc = is_real_data ? tas::evt_cscTightHaloId() : 1;
      filt_hbhe = is_real_data ? (tas::evt_hbheFilter() && tas::hcalnoise_isolatedNoiseSumE() < 50.0 && tas::hcalnoise_isolatedNoiseSumEt() < 25.0 && tas::hcalnoise_numIsolatedNoiseChannels() < 10) : 1;
      filt_hcallaser = is_real_data ? tas::filt_hcalLaser() : 1;
      filt_ecaltp = is_real_data ? tas::filt_ecalTP() : 1;
      filt_trkfail = is_real_data ? tas::filt_trackingFailure() : 1;
      filt_eebadsc = is_real_data ? tas::filt_eeBadSc() : 1;
      scale1fb = is_real_data ? 1 : tas::evt_scale1fb();
	  
      //Muon Loop
	  //cout<<"\nBegin Muon looping"<<endl;	  
	  for(unsigned int i=0; i<tas::mus_p4().size(); i++)  //What RECO and GEN variables are needed?
		{	
		  //		  cout<<i<<" of "<<tas::mus_p4().size()<<endl;
		  //cout<<"reco size: "<<tas::mus_p4().size()<<" mc size: "<<tas::mus_mc_p4().size()<<endl;
		  if (!isGoodVetoMuon(i)) continue;  //"fix me" in selection.cc

		  mu_p4.push_back(tas::mus_p4()[i]); 
		  mu_mc_p4.push_back(tas::mus_mc_p4()[i]);
		  mu_id.push_back(-13.0*tas::mus_charge()[i]);
		  mu_idx.push_back(i);
		  int id = mu_id[mu_id.size()-1];  //can't use mu_id[i] if veto turned on (might not be ith element)
		  int j = mu_idx[mu_idx.size()-1]; // just i? can't use idx[i] if veto turned on
		  mu_mc_id.push_back(tas::mus_mc_id().at(j));
		  mu_d0.push_back(leptonD0(id, j));  //mu_idx[i] is just i, but not same i for final vector if veto leps
		  mu_d0_err.push_back(leptonD0err(id, j)); //mu_id[i].
		  mu_dZ.push_back(leptonDZ(id, j));
		  mu_iso.push_back(muRelIso03(j));
		  mu_pid_PFMuon.push_back(tas::mus_pid_PFMuon()[i]); //new below
		  mu_gfit_chi2.push_back(tas::mus_gfit_chi2()[i]);
		  mu_gfit_validSTAHits.push_back(tas::mus_gfit_validSTAHits()[i]);
		  mu_numberOfMatchedStations.push_back(tas::mus_numberOfMatchedStations()[i]);
		  mu_validPixelHits.push_back(tas::mus_validPixelHits()[i]);
		  mu_nlayers.push_back(tas::mus_nlayers()[i]);
		  mu_ip3d.push_back(tas::mus_ip3d()[i]);
		  mu_ip3derr.push_back(tas::mus_ip3derr()[i]);

		  mu_passes_id.push_back(isGoodLepton(id, j));   //"fix me" in selection.cc
		  mu_FO.push_back(isFakableMuon(j));    //"fix me" in selection.cc

		  Lep mu_temp = Lep(id, j);
		  mu_motherID.push_back(lepMotherID(mu_temp));
		  mu_mc_motherp4.push_back(tas::mus_mc_motherp4()[i]);
		  
		  // cout<<"\nEnd Muon loop"<<endl;
		} //close muon loop
	  
      //Electron Loop
	  //cout<<"\nBegin electron looping"<<endl;	  
	  for(unsigned int i=0; i<tas::els_p4().size(); i++)
	  	{
		  
		  if (!isGoodVetoElectron(i)) continue; //"fix me" in selection.cc. Use at()?

		  el_p4.push_back(tas::els_p4()[i]);  //use at()?  
		  el_mc_p4.push_back(tas::els_mc_p4()[i]);  
		  el_id.push_back(-11.0*tas::els_charge()[i]); 
		  el_idx.push_back(i);
		  int id = el_id[el_id.size()-1]; //can't use mu_id[i] if veto turned on (might not be ith element)
		  int j = el_idx[el_idx.size()-1];  // just i? can't use idx[i] if veto turned on
		  el_mc_id.push_back(tas::els_mc_id().at(j));  
		  el_d0.push_back(leptonD0(id, j));
		  el_d0_err.push_back(leptonD0err(id, j));
		  el_dZ.push_back(leptonDZ(id, j));
		  el_iso.push_back(eleRelIso03(j));
		  el_sigmaIEtaIEta_full5x5.push_back(tas::els_sigmaIEtaIEta_full5x5()[i]);//new below
		  el_etaSC.push_back(tas::els_etaSC()[i]);
		  el_dEtaIn.push_back(tas::els_dEtaIn()[i]);
		  el_dPhiIn.push_back(tas::els_dPhiIn()[i]);
		  el_hOverE.push_back(tas::els_hOverE()[i]);
		  el_ip3d.push_back(tas::els_ip3d()[i]);
		  el_ip3derr.push_back(tas::els_ip3derr()[i]);
		  el_ecalEnergy.push_back(tas::els_ecalEnergy()[i]);
		  el_eOverPIn.push_back(tas::els_eOverPIn()[i]);
		  el_conv_vtx_flag.push_back(tas::els_conv_vtx_flag()[i]);
		  el_exp_innerlayers.push_back(tas::els_exp_innerlayers()[i]);
		  el_charge.push_back(tas::els_charge()[i]);    //check on this
		  el_sccharge.push_back(tas::els_sccharge()[i]);    //check on this
		  el_ckf_charge.push_back(tas::els_ckf_charge()[i]);    //check on this
		  el_trk_charge.push_back(tas::els_trk_charge()[i]);
		  el_threeChargeAgree.push_back(threeChargeAgree(j));
		  el_type.push_back(tas::els_type()[i]);

		  el_passes_id.push_back(isGoodLepton(id, j));  //"fix me" in selection.cc
		  el_FO.push_back(isFakableElectron(j));  //"fix me" in selection.cc

		  Lep el_temp = Lep(id, j);
		  el_motherID.push_back(lepMotherID(el_temp));
		  el_mc_motherp4.push_back(tas::els_mc_motherp4()[i]); 

	  	  //cout<<"\nEnd electron loop"<<endl;
	  	} //close electron loop
	  
      //Determine and save jet and b-tag variables
      ht = 0;
      for (unsigned int i = 0; i < tas::pfjets_p4().size(); i++)
	  	{
	  	  LorentzVector jet = tas::pfjets_p4().at(i);

	  	  //Kinematic jet cuts
	  	  if (jet.pt() < 40) continue;   //<------WHAT CUTS DO WE WANT???
	  	  if (fabs(jet.eta()) > 2.4) continue;

	  	  //Verbose
	  	  if (verbose) cout << "Possible jet with pT: " << jet.pt() << endl;
      
	  	  //Require loose jet ID
	  	  if (!isLoosePFJet(i)) continue;
      
	  	  //Jet cleaning -- electrons
	  	  bool jetIsLep = false;
	  	  for (unsigned int eidx = 0; eidx < tas::els_p4().size(); eidx++){
	  		LorentzVector electron = tas::els_p4().at(eidx);
	  		if (electron.pt() < 7) continue;
	  		if (!isGoodVetoElectron(eidx)) continue;
	  		if (ROOT::Math::VectorUtil::DeltaR(jet, electron) > 0.4) continue;
	  		jetIsLep = true;
	  	  }
	  	  if (jetIsLep == true) continue;

	  	  //Jet cleaning -- muons
	  	  for (unsigned int muidx = 0; muidx < tas::mus_p4().size(); muidx++){
	  		LorentzVector muon = tas::mus_p4().at(muidx);
	  		if (muon.pt() < 5) continue;
	  		if (!isGoodVetoMuon(muidx)) continue;
	  		if (ROOT::Math::VectorUtil::DeltaR(jet, muon) > 0.4) continue;
	  		jetIsLep = true;
	  	  }
	  	  if (jetIsLep == true) continue;

	  	  //Save jets that make it this far
	  	  jets.push_back(jet);
	  	  ht += jet.pt();
	  	  // float disc = tas::pfjets_combinedInclusiveSecondaryVertexV2BJetTag().at(i);  //BRANCH DOESNT EXIST.  DIFF NAME?
	  	  // jets_disc.push_back(disc);

	  	  // //Btag discriminator
	  	  // if (disc < 0.814) continue;

	  	  // //Save btags that make it this far
	  	  // btags_disc.push_back(disc);
	  	  // btags.push_back(tas::pfjets_p4().at(i));
	  	}
      njets = jets.size();
      nbtags = btags.size();

      //Verbose for jets
      if (verbose){
        cout << "njets: " << njets << endl;
        cout << "nbtags: " <<  nbtags << endl;
        for (unsigned int i = 0; i < jets.size(); i++) cout << i << " " << jets[i].pt() << " " << jets[i].eta() << endl;
      } 


	  BabyTree->Fill(); 
	  
    }//close event loop
    
    file->Close();
    delete file;
	
	cout<<"\nFile done"<<endl;
  }//close file loop
  
  cout<<"\nWriting file"<<endl;

  BabyFile->cd();
  BabyTree->Write();
  BabyFile->Close();


  return 0;  

}
