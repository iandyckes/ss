// -*- C++ -*-
#ifndef lepfilter_H
#define lepfilter_H
#include "Math/LorentzVector.h"
#include "Math/Point3D.h"
#include "TMath.h"
#include "TBranch.h"
#include "TTree.h"
#include "TH1F.h"
#include "TFile.h"
#include "TBits.h"
#include <vector> 
typedef ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > LorentzVector;

using namespace std; 
class lepfilter {
private: 
protected: 
	unsigned int index;
	float	met_;
	TBranch *met_branch;
	bool met_isLoaded;
	float	metPhi_;
	TBranch *metPhi_branch;
	bool metPhi_isLoaded;
	int	event_;
	TBranch *event_branch;
	bool event_isLoaded;
	int	lumi_;
	TBranch *lumi_branch;
	bool lumi_isLoaded;
	int	run_;
	TBranch *run_branch;
	bool run_isLoaded;
	bool	filt_csc_;
	TBranch *filt_csc_branch;
	bool filt_csc_isLoaded;
	bool	filt_hbhe_;
	TBranch *filt_hbhe_branch;
	bool filt_hbhe_isLoaded;
	bool	filt_hcallaser_;
	TBranch *filt_hcallaser_branch;
	bool filt_hcallaser_isLoaded;
	bool	filt_ecaltp_;
	TBranch *filt_ecaltp_branch;
	bool filt_ecaltp_isLoaded;
	bool	filt_trkfail_;
	TBranch *filt_trkfail_branch;
	bool filt_trkfail_isLoaded;
	bool	filt_eebadsc_;
	TBranch *filt_eebadsc_branch;
	bool filt_eebadsc_isLoaded;
	bool	is_real_data_;
	TBranch *is_real_data_branch;
	bool is_real_data_isLoaded;
	float	scale1fb_;
	TBranch *scale1fb_branch;
	bool scale1fb_isLoaded;
	float	xsec_;
	TBranch *xsec_branch;
	bool xsec_isLoaded;
	float	kfactor_;
	TBranch *kfactor_branch;
	bool kfactor_isLoaded;
	float	gen_met_;
	TBranch *gen_met_branch;
	bool gen_met_isLoaded;
	float	gen_met_phi_;
	TBranch *gen_met_phi_branch;
	bool gen_met_phi_isLoaded;
	float	njets_;
	TBranch *njets_branch;
	bool njets_isLoaded;
	int	best_hyp_;
	TBranch *best_hyp_branch;
	bool best_hyp_isLoaded;
	int	hyp_class_;
	TBranch *hyp_class_branch;
	bool hyp_class_isLoaded;
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > *lep1_p4_;
	TBranch *lep1_p4_branch;
	bool lep1_p4_isLoaded;
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > *lep2_p4_;
	TBranch *lep2_p4_branch;
	bool lep2_p4_isLoaded;
	float	ht_;
	TBranch *ht_branch;
	bool ht_isLoaded;
	int	nbtags_uncorr_;
	TBranch *nbtags_uncorr_branch;
	bool nbtags_uncorr_isLoaded;
	int	lep1_motherID_;
	TBranch *lep1_motherID_branch;
	bool lep1_motherID_isLoaded;
	int	lep2_motherID_;
	TBranch *lep2_motherID_branch;
	bool lep2_motherID_isLoaded;
	int	lep1_mc_id_;
	TBranch *lep1_mc_id_branch;
	bool lep1_mc_id_isLoaded;
	int	lep2_mc_id_;
	TBranch *lep2_mc_id_branch;
	bool lep2_mc_id_isLoaded;
	int	lep1_id_;
	TBranch *lep1_id_branch;
	bool lep1_id_isLoaded;
	int	lep2_id_;
	TBranch *lep2_id_branch;
	bool lep2_id_isLoaded;
	int	lep1_idx_;
	TBranch *lep1_idx_branch;
	bool lep1_idx_isLoaded;
	int	lep2_idx_;
	TBranch *lep2_idx_branch;
	bool lep2_idx_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > *jets_;
	TBranch *jets_branch;
	bool jets_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > *btags_p4_uncorr_;
	TBranch *btags_p4_uncorr_branch;
	bool btags_p4_uncorr_isLoaded;
	vector<float> *btags_disc_uncorr_;
	TBranch *btags_disc_uncorr_branch;
	bool btags_disc_uncorr_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > *btags_;
	TBranch *btags_branch;
	bool btags_isLoaded;
	int	nbtags_;
	TBranch *nbtags_branch;
	bool nbtags_isLoaded;
	float	sf_dilepTrig_hpt_;
	TBranch *sf_dilepTrig_hpt_branch;
	bool sf_dilepTrig_hpt_isLoaded;
	float	sf_dilepTrig_lpt_;
	TBranch *sf_dilepTrig_lpt_branch;
	bool sf_dilepTrig_lpt_isLoaded;
	float	sf_dilepTrig_vlpt_;
	TBranch *sf_dilepTrig_vlpt_branch;
	bool sf_dilepTrig_vlpt_isLoaded;
	int	hyp_type_;
	TBranch *hyp_type_branch;
	bool hyp_type_isLoaded;
	float	sf_dilep_eff_;
	TBranch *sf_dilep_eff_branch;
	bool sf_dilep_eff_isLoaded;
	float	mt_;
	TBranch *mt_branch;
	bool mt_isLoaded;
	float	mt_l2_;
	TBranch *mt_l2_branch;
	bool mt_l2_isLoaded;
	float	mt2_;
	TBranch *mt2_branch;
	bool mt2_isLoaded;
	float	mGluino_;
	TBranch *mGluino_branch;
	bool mGluino_isLoaded;
	float	mLSP_;
	TBranch *mLSP_branch;
	bool mLSP_isLoaded;
	float	mSbottom_;
	TBranch *mSbottom_branch;
	bool mSbottom_isLoaded;
	float	mChargino_;
	TBranch *mChargino_branch;
	bool mChargino_isLoaded;
	int	lep1_id_gen_;
	TBranch *lep1_id_gen_branch;
	bool lep1_id_gen_isLoaded;
	int	lep2_id_gen_;
	TBranch *lep2_id_gen_branch;
	bool lep2_id_gen_isLoaded;
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > *lep1_p4_gen_;
	TBranch *lep1_p4_gen_branch;
	bool lep1_p4_gen_isLoaded;
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > *lep2_p4_gen_;
	TBranch *lep2_p4_gen_branch;
	bool lep2_p4_gen_isLoaded;
	int	lep3_id_;
	TBranch *lep3_id_branch;
	bool lep3_id_isLoaded;
	int	lep3_idx_;
	TBranch *lep3_idx_branch;
	bool lep3_idx_isLoaded;
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > *lep3_p4_;
	TBranch *lep3_p4_branch;
	bool lep3_p4_isLoaded;
	float	lep1_iso_;
	TBranch *lep1_iso_branch;
	bool lep1_iso_isLoaded;
	float	lep2_iso_;
	TBranch *lep2_iso_branch;
	bool lep2_iso_isLoaded;
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > *dilep_p4_;
	TBranch *dilep_p4_branch;
	bool dilep_p4_isLoaded;
	TString *sample_;
	TBranch *sample_branch;
	bool sample_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > *genps_p4_;
	TBranch *genps_p4_branch;
	bool genps_p4_isLoaded;
	vector<int> *genps_id_;
	TBranch *genps_id_branch;
	bool genps_id_isLoaded;
	vector<int> *genps_id_mother_;
	TBranch *genps_id_mother_branch;
	bool genps_id_mother_isLoaded;
	vector<int> *genps_status_;
	TBranch *genps_status_branch;
	bool genps_status_isLoaded;
	vector<int> *genps_id_grandma_;
	TBranch *genps_id_grandma_branch;
	bool genps_id_grandma_isLoaded;
	bool	lep1_passes_id_;
	TBranch *lep1_passes_id_branch;
	bool lep1_passes_id_isLoaded;
	bool	lep2_passes_id_;
	TBranch *lep2_passes_id_branch;
	bool lep2_passes_id_isLoaded;
	float	lep1_d0_;
	TBranch *lep1_d0_branch;
	bool lep1_d0_isLoaded;
	float	lep2_d0_;
	TBranch *lep2_d0_branch;
	bool lep2_d0_isLoaded;
	float	lep1_dZ_;
	TBranch *lep1_dZ_branch;
	bool lep1_dZ_isLoaded;
	float	lep2_dZ_;
	TBranch *lep2_dZ_branch;
	bool lep2_dZ_isLoaded;
	float	lep1_d0_err_;
	TBranch *lep1_d0_err_branch;
	bool lep1_d0_err_isLoaded;
	float	lep2_d0_err_;
	TBranch *lep2_d0_err_branch;
	bool lep2_d0_err_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > *el_p4_;
	TBranch *el_p4_branch;
	bool el_p4_isLoaded;
	vector<int> *el_id_;
	TBranch *el_id_branch;
	bool el_id_isLoaded;
	vector<int> *el_idx_;
	TBranch *el_idx_branch;
	bool el_idx_isLoaded;
	vector<float> *el_d0_;
	TBranch *el_d0_branch;
	bool el_d0_isLoaded;
	vector<float> *el_dZ_;
	TBranch *el_dZ_branch;
	bool el_dZ_isLoaded;
	vector<float> *el_d0_err_;
	TBranch *el_d0_err_branch;
	bool el_d0_err_isLoaded;
	vector<int> *el_motherID_;
	TBranch *el_motherID_branch;
	bool el_motherID_isLoaded;
	vector<int> *el_mc_id_;
	TBranch *el_mc_id_branch;
	bool el_mc_id_isLoaded;
	vector<float> *el_iso_;
	TBranch *el_iso_branch;
	bool el_iso_isLoaded;
	vector<bool> *el_passes_id_;
	TBranch *el_passes_id_branch;
	bool el_passes_id_isLoaded;
	vector<bool> *el_FO_;
	TBranch *el_FO_branch;
	bool el_FO_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > *mu_p4_;
	TBranch *mu_p4_branch;
	bool mu_p4_isLoaded;
	vector<int> *mu_id_;
	TBranch *mu_id_branch;
	bool mu_id_isLoaded;
	vector<int> *mu_idx_;
	TBranch *mu_idx_branch;
	bool mu_idx_isLoaded;
	vector<float> *mu_d0_;
	TBranch *mu_d0_branch;
	bool mu_d0_isLoaded;
	vector<float> *mu_dZ_;
	TBranch *mu_dZ_branch;
	bool mu_dZ_isLoaded;
	vector<float> *mu_d0_err_;
	TBranch *mu_d0_err_branch;
	bool mu_d0_err_isLoaded;
	vector<int> *mu_motherID_;
	TBranch *mu_motherID_branch;
	bool mu_motherID_isLoaded;
	vector<int> *mu_mc_id_;
	TBranch *mu_mc_id_branch;
	bool mu_mc_id_isLoaded;
	vector<float> *mu_iso_;
	TBranch *mu_iso_branch;
	bool mu_iso_isLoaded;
	vector<bool> *mu_passes_id_;
	TBranch *mu_passes_id_branch;
	bool mu_passes_id_isLoaded;
	vector<bool> *mu_FO_;
	TBranch *mu_FO_branch;
	bool mu_FO_isLoaded;
public: 
void Init(TTree *tree) {
	lep1_p4_branch = 0;
	if (tree->GetBranch("lep1_p4") != 0) {
		lep1_p4_branch = tree->GetBranch("lep1_p4");
		if (lep1_p4_branch) {lep1_p4_branch->SetAddress(&lep1_p4_);}
	}
	lep2_p4_branch = 0;
	if (tree->GetBranch("lep2_p4") != 0) {
		lep2_p4_branch = tree->GetBranch("lep2_p4");
		if (lep2_p4_branch) {lep2_p4_branch->SetAddress(&lep2_p4_);}
	}
	jets_branch = 0;
	if (tree->GetBranch("jets") != 0) {
		jets_branch = tree->GetBranch("jets");
		if (jets_branch) {jets_branch->SetAddress(&jets_);}
	}
	btags_p4_uncorr_branch = 0;
	if (tree->GetBranch("btags_p4_uncorr") != 0) {
		btags_p4_uncorr_branch = tree->GetBranch("btags_p4_uncorr");
		if (btags_p4_uncorr_branch) {btags_p4_uncorr_branch->SetAddress(&btags_p4_uncorr_);}
	}
	btags_branch = 0;
	if (tree->GetBranch("btags") != 0) {
		btags_branch = tree->GetBranch("btags");
		if (btags_branch) {btags_branch->SetAddress(&btags_);}
	}
	lep1_p4_gen_branch = 0;
	if (tree->GetBranch("lep1_p4_gen") != 0) {
		lep1_p4_gen_branch = tree->GetBranch("lep1_p4_gen");
		if (lep1_p4_gen_branch) {lep1_p4_gen_branch->SetAddress(&lep1_p4_gen_);}
	}
	lep2_p4_gen_branch = 0;
	if (tree->GetBranch("lep2_p4_gen") != 0) {
		lep2_p4_gen_branch = tree->GetBranch("lep2_p4_gen");
		if (lep2_p4_gen_branch) {lep2_p4_gen_branch->SetAddress(&lep2_p4_gen_);}
	}
	lep3_p4_branch = 0;
	if (tree->GetBranch("lep3_p4") != 0) {
		lep3_p4_branch = tree->GetBranch("lep3_p4");
		if (lep3_p4_branch) {lep3_p4_branch->SetAddress(&lep3_p4_);}
	}
	dilep_p4_branch = 0;
	if (tree->GetBranch("dilep_p4") != 0) {
		dilep_p4_branch = tree->GetBranch("dilep_p4");
		if (dilep_p4_branch) {dilep_p4_branch->SetAddress(&dilep_p4_);}
	}
	genps_p4_branch = 0;
	if (tree->GetBranch("genps_p4") != 0) {
		genps_p4_branch = tree->GetBranch("genps_p4");
		if (genps_p4_branch) {genps_p4_branch->SetAddress(&genps_p4_);}
	}
	el_p4_branch = 0;
	if (tree->GetBranch("el_p4") != 0) {
		el_p4_branch = tree->GetBranch("el_p4");
		if (el_p4_branch) {el_p4_branch->SetAddress(&el_p4_);}
	}
	mu_p4_branch = 0;
	if (tree->GetBranch("mu_p4") != 0) {
		mu_p4_branch = tree->GetBranch("mu_p4");
		if (mu_p4_branch) {mu_p4_branch->SetAddress(&mu_p4_);}
	}
  tree->SetMakeClass(1);
	met_branch = 0;
	if (tree->GetBranch("met") != 0) {
		met_branch = tree->GetBranch("met");
		if (met_branch) {met_branch->SetAddress(&met_);}
	}
	metPhi_branch = 0;
	if (tree->GetBranch("metPhi") != 0) {
		metPhi_branch = tree->GetBranch("metPhi");
		if (metPhi_branch) {metPhi_branch->SetAddress(&metPhi_);}
	}
	event_branch = 0;
	if (tree->GetBranch("event") != 0) {
		event_branch = tree->GetBranch("event");
		if (event_branch) {event_branch->SetAddress(&event_);}
	}
	lumi_branch = 0;
	if (tree->GetBranch("lumi") != 0) {
		lumi_branch = tree->GetBranch("lumi");
		if (lumi_branch) {lumi_branch->SetAddress(&lumi_);}
	}
	run_branch = 0;
	if (tree->GetBranch("run") != 0) {
		run_branch = tree->GetBranch("run");
		if (run_branch) {run_branch->SetAddress(&run_);}
	}
	filt_csc_branch = 0;
	if (tree->GetBranch("filt_csc") != 0) {
		filt_csc_branch = tree->GetBranch("filt_csc");
		if (filt_csc_branch) {filt_csc_branch->SetAddress(&filt_csc_);}
	}
	filt_hbhe_branch = 0;
	if (tree->GetBranch("filt_hbhe") != 0) {
		filt_hbhe_branch = tree->GetBranch("filt_hbhe");
		if (filt_hbhe_branch) {filt_hbhe_branch->SetAddress(&filt_hbhe_);}
	}
	filt_hcallaser_branch = 0;
	if (tree->GetBranch("filt_hcallaser") != 0) {
		filt_hcallaser_branch = tree->GetBranch("filt_hcallaser");
		if (filt_hcallaser_branch) {filt_hcallaser_branch->SetAddress(&filt_hcallaser_);}
	}
	filt_ecaltp_branch = 0;
	if (tree->GetBranch("filt_ecaltp") != 0) {
		filt_ecaltp_branch = tree->GetBranch("filt_ecaltp");
		if (filt_ecaltp_branch) {filt_ecaltp_branch->SetAddress(&filt_ecaltp_);}
	}
	filt_trkfail_branch = 0;
	if (tree->GetBranch("filt_trkfail") != 0) {
		filt_trkfail_branch = tree->GetBranch("filt_trkfail");
		if (filt_trkfail_branch) {filt_trkfail_branch->SetAddress(&filt_trkfail_);}
	}
	filt_eebadsc_branch = 0;
	if (tree->GetBranch("filt_eebadsc") != 0) {
		filt_eebadsc_branch = tree->GetBranch("filt_eebadsc");
		if (filt_eebadsc_branch) {filt_eebadsc_branch->SetAddress(&filt_eebadsc_);}
	}
	is_real_data_branch = 0;
	if (tree->GetBranch("is_real_data") != 0) {
		is_real_data_branch = tree->GetBranch("is_real_data");
		if (is_real_data_branch) {is_real_data_branch->SetAddress(&is_real_data_);}
	}
	scale1fb_branch = 0;
	if (tree->GetBranch("scale1fb") != 0) {
		scale1fb_branch = tree->GetBranch("scale1fb");
		if (scale1fb_branch) {scale1fb_branch->SetAddress(&scale1fb_);}
	}
	xsec_branch = 0;
	if (tree->GetBranch("xsec") != 0) {
		xsec_branch = tree->GetBranch("xsec");
		if (xsec_branch) {xsec_branch->SetAddress(&xsec_);}
	}
	kfactor_branch = 0;
	if (tree->GetBranch("kfactor") != 0) {
		kfactor_branch = tree->GetBranch("kfactor");
		if (kfactor_branch) {kfactor_branch->SetAddress(&kfactor_);}
	}
	gen_met_branch = 0;
	if (tree->GetBranch("gen_met") != 0) {
		gen_met_branch = tree->GetBranch("gen_met");
		if (gen_met_branch) {gen_met_branch->SetAddress(&gen_met_);}
	}
	gen_met_phi_branch = 0;
	if (tree->GetBranch("gen_met_phi") != 0) {
		gen_met_phi_branch = tree->GetBranch("gen_met_phi");
		if (gen_met_phi_branch) {gen_met_phi_branch->SetAddress(&gen_met_phi_);}
	}
	njets_branch = 0;
	if (tree->GetBranch("njets") != 0) {
		njets_branch = tree->GetBranch("njets");
		if (njets_branch) {njets_branch->SetAddress(&njets_);}
	}
	best_hyp_branch = 0;
	if (tree->GetBranch("best_hyp") != 0) {
		best_hyp_branch = tree->GetBranch("best_hyp");
		if (best_hyp_branch) {best_hyp_branch->SetAddress(&best_hyp_);}
	}
	hyp_class_branch = 0;
	if (tree->GetBranch("hyp_class") != 0) {
		hyp_class_branch = tree->GetBranch("hyp_class");
		if (hyp_class_branch) {hyp_class_branch->SetAddress(&hyp_class_);}
	}
	ht_branch = 0;
	if (tree->GetBranch("ht") != 0) {
		ht_branch = tree->GetBranch("ht");
		if (ht_branch) {ht_branch->SetAddress(&ht_);}
	}
	nbtags_uncorr_branch = 0;
	if (tree->GetBranch("nbtags_uncorr") != 0) {
		nbtags_uncorr_branch = tree->GetBranch("nbtags_uncorr");
		if (nbtags_uncorr_branch) {nbtags_uncorr_branch->SetAddress(&nbtags_uncorr_);}
	}
	lep1_motherID_branch = 0;
	if (tree->GetBranch("lep1_motherID") != 0) {
		lep1_motherID_branch = tree->GetBranch("lep1_motherID");
		if (lep1_motherID_branch) {lep1_motherID_branch->SetAddress(&lep1_motherID_);}
	}
	lep2_motherID_branch = 0;
	if (tree->GetBranch("lep2_motherID") != 0) {
		lep2_motherID_branch = tree->GetBranch("lep2_motherID");
		if (lep2_motherID_branch) {lep2_motherID_branch->SetAddress(&lep2_motherID_);}
	}
	lep1_mc_id_branch = 0;
	if (tree->GetBranch("lep1_mc_id") != 0) {
		lep1_mc_id_branch = tree->GetBranch("lep1_mc_id");
		if (lep1_mc_id_branch) {lep1_mc_id_branch->SetAddress(&lep1_mc_id_);}
	}
	lep2_mc_id_branch = 0;
	if (tree->GetBranch("lep2_mc_id") != 0) {
		lep2_mc_id_branch = tree->GetBranch("lep2_mc_id");
		if (lep2_mc_id_branch) {lep2_mc_id_branch->SetAddress(&lep2_mc_id_);}
	}
	lep1_id_branch = 0;
	if (tree->GetBranch("lep1_id") != 0) {
		lep1_id_branch = tree->GetBranch("lep1_id");
		if (lep1_id_branch) {lep1_id_branch->SetAddress(&lep1_id_);}
	}
	lep2_id_branch = 0;
	if (tree->GetBranch("lep2_id") != 0) {
		lep2_id_branch = tree->GetBranch("lep2_id");
		if (lep2_id_branch) {lep2_id_branch->SetAddress(&lep2_id_);}
	}
	lep1_idx_branch = 0;
	if (tree->GetBranch("lep1_idx") != 0) {
		lep1_idx_branch = tree->GetBranch("lep1_idx");
		if (lep1_idx_branch) {lep1_idx_branch->SetAddress(&lep1_idx_);}
	}
	lep2_idx_branch = 0;
	if (tree->GetBranch("lep2_idx") != 0) {
		lep2_idx_branch = tree->GetBranch("lep2_idx");
		if (lep2_idx_branch) {lep2_idx_branch->SetAddress(&lep2_idx_);}
	}
	btags_disc_uncorr_branch = 0;
	if (tree->GetBranch("btags_disc_uncorr") != 0) {
		btags_disc_uncorr_branch = tree->GetBranch("btags_disc_uncorr");
		if (btags_disc_uncorr_branch) {btags_disc_uncorr_branch->SetAddress(&btags_disc_uncorr_);}
	}
	nbtags_branch = 0;
	if (tree->GetBranch("nbtags") != 0) {
		nbtags_branch = tree->GetBranch("nbtags");
		if (nbtags_branch) {nbtags_branch->SetAddress(&nbtags_);}
	}
	sf_dilepTrig_hpt_branch = 0;
	if (tree->GetBranch("sf_dilepTrig_hpt") != 0) {
		sf_dilepTrig_hpt_branch = tree->GetBranch("sf_dilepTrig_hpt");
		if (sf_dilepTrig_hpt_branch) {sf_dilepTrig_hpt_branch->SetAddress(&sf_dilepTrig_hpt_);}
	}
	sf_dilepTrig_lpt_branch = 0;
	if (tree->GetBranch("sf_dilepTrig_lpt") != 0) {
		sf_dilepTrig_lpt_branch = tree->GetBranch("sf_dilepTrig_lpt");
		if (sf_dilepTrig_lpt_branch) {sf_dilepTrig_lpt_branch->SetAddress(&sf_dilepTrig_lpt_);}
	}
	sf_dilepTrig_vlpt_branch = 0;
	if (tree->GetBranch("sf_dilepTrig_vlpt") != 0) {
		sf_dilepTrig_vlpt_branch = tree->GetBranch("sf_dilepTrig_vlpt");
		if (sf_dilepTrig_vlpt_branch) {sf_dilepTrig_vlpt_branch->SetAddress(&sf_dilepTrig_vlpt_);}
	}
	hyp_type_branch = 0;
	if (tree->GetBranch("hyp_type") != 0) {
		hyp_type_branch = tree->GetBranch("hyp_type");
		if (hyp_type_branch) {hyp_type_branch->SetAddress(&hyp_type_);}
	}
	sf_dilep_eff_branch = 0;
	if (tree->GetBranch("sf_dilep_eff") != 0) {
		sf_dilep_eff_branch = tree->GetBranch("sf_dilep_eff");
		if (sf_dilep_eff_branch) {sf_dilep_eff_branch->SetAddress(&sf_dilep_eff_);}
	}
	mt_branch = 0;
	if (tree->GetBranch("mt") != 0) {
		mt_branch = tree->GetBranch("mt");
		if (mt_branch) {mt_branch->SetAddress(&mt_);}
	}
	mt_l2_branch = 0;
	if (tree->GetBranch("mt_l2") != 0) {
		mt_l2_branch = tree->GetBranch("mt_l2");
		if (mt_l2_branch) {mt_l2_branch->SetAddress(&mt_l2_);}
	}
	mt2_branch = 0;
	if (tree->GetBranch("mt2") != 0) {
		mt2_branch = tree->GetBranch("mt2");
		if (mt2_branch) {mt2_branch->SetAddress(&mt2_);}
	}
	mGluino_branch = 0;
	if (tree->GetBranch("mGluino") != 0) {
		mGluino_branch = tree->GetBranch("mGluino");
		if (mGluino_branch) {mGluino_branch->SetAddress(&mGluino_);}
	}
	mLSP_branch = 0;
	if (tree->GetBranch("mLSP") != 0) {
		mLSP_branch = tree->GetBranch("mLSP");
		if (mLSP_branch) {mLSP_branch->SetAddress(&mLSP_);}
	}
	mSbottom_branch = 0;
	if (tree->GetBranch("mSbottom") != 0) {
		mSbottom_branch = tree->GetBranch("mSbottom");
		if (mSbottom_branch) {mSbottom_branch->SetAddress(&mSbottom_);}
	}
	mChargino_branch = 0;
	if (tree->GetBranch("mChargino") != 0) {
		mChargino_branch = tree->GetBranch("mChargino");
		if (mChargino_branch) {mChargino_branch->SetAddress(&mChargino_);}
	}
	lep1_id_gen_branch = 0;
	if (tree->GetBranch("lep1_id_gen") != 0) {
		lep1_id_gen_branch = tree->GetBranch("lep1_id_gen");
		if (lep1_id_gen_branch) {lep1_id_gen_branch->SetAddress(&lep1_id_gen_);}
	}
	lep2_id_gen_branch = 0;
	if (tree->GetBranch("lep2_id_gen") != 0) {
		lep2_id_gen_branch = tree->GetBranch("lep2_id_gen");
		if (lep2_id_gen_branch) {lep2_id_gen_branch->SetAddress(&lep2_id_gen_);}
	}
	lep3_id_branch = 0;
	if (tree->GetBranch("lep3_id") != 0) {
		lep3_id_branch = tree->GetBranch("lep3_id");
		if (lep3_id_branch) {lep3_id_branch->SetAddress(&lep3_id_);}
	}
	lep3_idx_branch = 0;
	if (tree->GetBranch("lep3_idx") != 0) {
		lep3_idx_branch = tree->GetBranch("lep3_idx");
		if (lep3_idx_branch) {lep3_idx_branch->SetAddress(&lep3_idx_);}
	}
	lep1_iso_branch = 0;
	if (tree->GetBranch("lep1_iso") != 0) {
		lep1_iso_branch = tree->GetBranch("lep1_iso");
		if (lep1_iso_branch) {lep1_iso_branch->SetAddress(&lep1_iso_);}
	}
	lep2_iso_branch = 0;
	if (tree->GetBranch("lep2_iso") != 0) {
		lep2_iso_branch = tree->GetBranch("lep2_iso");
		if (lep2_iso_branch) {lep2_iso_branch->SetAddress(&lep2_iso_);}
	}
	sample_branch = 0;
	if (tree->GetBranch("sample") != 0) {
		sample_branch = tree->GetBranch("sample");
		if (sample_branch) {sample_branch->SetAddress(&sample_);}
	}
	genps_id_branch = 0;
	if (tree->GetBranch("genps_id") != 0) {
		genps_id_branch = tree->GetBranch("genps_id");
		if (genps_id_branch) {genps_id_branch->SetAddress(&genps_id_);}
	}
	genps_id_mother_branch = 0;
	if (tree->GetBranch("genps_id_mother") != 0) {
		genps_id_mother_branch = tree->GetBranch("genps_id_mother");
		if (genps_id_mother_branch) {genps_id_mother_branch->SetAddress(&genps_id_mother_);}
	}
	genps_status_branch = 0;
	if (tree->GetBranch("genps_status") != 0) {
		genps_status_branch = tree->GetBranch("genps_status");
		if (genps_status_branch) {genps_status_branch->SetAddress(&genps_status_);}
	}
	genps_id_grandma_branch = 0;
	if (tree->GetBranch("genps_id_grandma") != 0) {
		genps_id_grandma_branch = tree->GetBranch("genps_id_grandma");
		if (genps_id_grandma_branch) {genps_id_grandma_branch->SetAddress(&genps_id_grandma_);}
	}
	lep1_passes_id_branch = 0;
	if (tree->GetBranch("lep1_passes_id") != 0) {
		lep1_passes_id_branch = tree->GetBranch("lep1_passes_id");
		if (lep1_passes_id_branch) {lep1_passes_id_branch->SetAddress(&lep1_passes_id_);}
	}
	lep2_passes_id_branch = 0;
	if (tree->GetBranch("lep2_passes_id") != 0) {
		lep2_passes_id_branch = tree->GetBranch("lep2_passes_id");
		if (lep2_passes_id_branch) {lep2_passes_id_branch->SetAddress(&lep2_passes_id_);}
	}
	lep1_d0_branch = 0;
	if (tree->GetBranch("lep1_d0") != 0) {
		lep1_d0_branch = tree->GetBranch("lep1_d0");
		if (lep1_d0_branch) {lep1_d0_branch->SetAddress(&lep1_d0_);}
	}
	lep2_d0_branch = 0;
	if (tree->GetBranch("lep2_d0") != 0) {
		lep2_d0_branch = tree->GetBranch("lep2_d0");
		if (lep2_d0_branch) {lep2_d0_branch->SetAddress(&lep2_d0_);}
	}
	lep1_dZ_branch = 0;
	if (tree->GetBranch("lep1_dZ") != 0) {
		lep1_dZ_branch = tree->GetBranch("lep1_dZ");
		if (lep1_dZ_branch) {lep1_dZ_branch->SetAddress(&lep1_dZ_);}
	}
	lep2_dZ_branch = 0;
	if (tree->GetBranch("lep2_dZ") != 0) {
		lep2_dZ_branch = tree->GetBranch("lep2_dZ");
		if (lep2_dZ_branch) {lep2_dZ_branch->SetAddress(&lep2_dZ_);}
	}
	lep1_d0_err_branch = 0;
	if (tree->GetBranch("lep1_d0_err") != 0) {
		lep1_d0_err_branch = tree->GetBranch("lep1_d0_err");
		if (lep1_d0_err_branch) {lep1_d0_err_branch->SetAddress(&lep1_d0_err_);}
	}
	lep2_d0_err_branch = 0;
	if (tree->GetBranch("lep2_d0_err") != 0) {
		lep2_d0_err_branch = tree->GetBranch("lep2_d0_err");
		if (lep2_d0_err_branch) {lep2_d0_err_branch->SetAddress(&lep2_d0_err_);}
	}
	el_id_branch = 0;
	if (tree->GetBranch("el_id") != 0) {
		el_id_branch = tree->GetBranch("el_id");
		if (el_id_branch) {el_id_branch->SetAddress(&el_id_);}
	}
	el_idx_branch = 0;
	if (tree->GetBranch("el_idx") != 0) {
		el_idx_branch = tree->GetBranch("el_idx");
		if (el_idx_branch) {el_idx_branch->SetAddress(&el_idx_);}
	}
	el_d0_branch = 0;
	if (tree->GetBranch("el_d0") != 0) {
		el_d0_branch = tree->GetBranch("el_d0");
		if (el_d0_branch) {el_d0_branch->SetAddress(&el_d0_);}
	}
	el_dZ_branch = 0;
	if (tree->GetBranch("el_dZ") != 0) {
		el_dZ_branch = tree->GetBranch("el_dZ");
		if (el_dZ_branch) {el_dZ_branch->SetAddress(&el_dZ_);}
	}
	el_d0_err_branch = 0;
	if (tree->GetBranch("el_d0_err") != 0) {
		el_d0_err_branch = tree->GetBranch("el_d0_err");
		if (el_d0_err_branch) {el_d0_err_branch->SetAddress(&el_d0_err_);}
	}
	el_motherID_branch = 0;
	if (tree->GetBranch("el_motherID") != 0) {
		el_motherID_branch = tree->GetBranch("el_motherID");
		if (el_motherID_branch) {el_motherID_branch->SetAddress(&el_motherID_);}
	}
	el_mc_id_branch = 0;
	if (tree->GetBranch("el_mc_id") != 0) {
		el_mc_id_branch = tree->GetBranch("el_mc_id");
		if (el_mc_id_branch) {el_mc_id_branch->SetAddress(&el_mc_id_);}
	}
	el_iso_branch = 0;
	if (tree->GetBranch("el_iso") != 0) {
		el_iso_branch = tree->GetBranch("el_iso");
		if (el_iso_branch) {el_iso_branch->SetAddress(&el_iso_);}
	}
	el_passes_id_branch = 0;
	if (tree->GetBranch("el_passes_id") != 0) {
		el_passes_id_branch = tree->GetBranch("el_passes_id");
		if (el_passes_id_branch) {el_passes_id_branch->SetAddress(&el_passes_id_);}
	}
	el_FO_branch = 0;
	if (tree->GetBranch("el_FO") != 0) {
		el_FO_branch = tree->GetBranch("el_FO");
		if (el_FO_branch) {el_FO_branch->SetAddress(&el_FO_);}
	}
	mu_id_branch = 0;
	if (tree->GetBranch("mu_id") != 0) {
		mu_id_branch = tree->GetBranch("mu_id");
		if (mu_id_branch) {mu_id_branch->SetAddress(&mu_id_);}
	}
	mu_idx_branch = 0;
	if (tree->GetBranch("mu_idx") != 0) {
		mu_idx_branch = tree->GetBranch("mu_idx");
		if (mu_idx_branch) {mu_idx_branch->SetAddress(&mu_idx_);}
	}
	mu_d0_branch = 0;
	if (tree->GetBranch("mu_d0") != 0) {
		mu_d0_branch = tree->GetBranch("mu_d0");
		if (mu_d0_branch) {mu_d0_branch->SetAddress(&mu_d0_);}
	}
	mu_dZ_branch = 0;
	if (tree->GetBranch("mu_dZ") != 0) {
		mu_dZ_branch = tree->GetBranch("mu_dZ");
		if (mu_dZ_branch) {mu_dZ_branch->SetAddress(&mu_dZ_);}
	}
	mu_d0_err_branch = 0;
	if (tree->GetBranch("mu_d0_err") != 0) {
		mu_d0_err_branch = tree->GetBranch("mu_d0_err");
		if (mu_d0_err_branch) {mu_d0_err_branch->SetAddress(&mu_d0_err_);}
	}
	mu_motherID_branch = 0;
	if (tree->GetBranch("mu_motherID") != 0) {
		mu_motherID_branch = tree->GetBranch("mu_motherID");
		if (mu_motherID_branch) {mu_motherID_branch->SetAddress(&mu_motherID_);}
	}
	mu_mc_id_branch = 0;
	if (tree->GetBranch("mu_mc_id") != 0) {
		mu_mc_id_branch = tree->GetBranch("mu_mc_id");
		if (mu_mc_id_branch) {mu_mc_id_branch->SetAddress(&mu_mc_id_);}
	}
	mu_iso_branch = 0;
	if (tree->GetBranch("mu_iso") != 0) {
		mu_iso_branch = tree->GetBranch("mu_iso");
		if (mu_iso_branch) {mu_iso_branch->SetAddress(&mu_iso_);}
	}
	mu_passes_id_branch = 0;
	if (tree->GetBranch("mu_passes_id") != 0) {
		mu_passes_id_branch = tree->GetBranch("mu_passes_id");
		if (mu_passes_id_branch) {mu_passes_id_branch->SetAddress(&mu_passes_id_);}
	}
	mu_FO_branch = 0;
	if (tree->GetBranch("mu_FO") != 0) {
		mu_FO_branch = tree->GetBranch("mu_FO");
		if (mu_FO_branch) {mu_FO_branch->SetAddress(&mu_FO_);}
	}
  tree->SetMakeClass(0);
}
void GetEntry(unsigned int idx) 
	// this only marks branches as not loaded, saving a lot of time
	{
		index = idx;
		met_isLoaded = false;
		metPhi_isLoaded = false;
		event_isLoaded = false;
		lumi_isLoaded = false;
		run_isLoaded = false;
		filt_csc_isLoaded = false;
		filt_hbhe_isLoaded = false;
		filt_hcallaser_isLoaded = false;
		filt_ecaltp_isLoaded = false;
		filt_trkfail_isLoaded = false;
		filt_eebadsc_isLoaded = false;
		is_real_data_isLoaded = false;
		scale1fb_isLoaded = false;
		xsec_isLoaded = false;
		kfactor_isLoaded = false;
		gen_met_isLoaded = false;
		gen_met_phi_isLoaded = false;
		njets_isLoaded = false;
		best_hyp_isLoaded = false;
		hyp_class_isLoaded = false;
		lep1_p4_isLoaded = false;
		lep2_p4_isLoaded = false;
		ht_isLoaded = false;
		nbtags_uncorr_isLoaded = false;
		lep1_motherID_isLoaded = false;
		lep2_motherID_isLoaded = false;
		lep1_mc_id_isLoaded = false;
		lep2_mc_id_isLoaded = false;
		lep1_id_isLoaded = false;
		lep2_id_isLoaded = false;
		lep1_idx_isLoaded = false;
		lep2_idx_isLoaded = false;
		jets_isLoaded = false;
		btags_p4_uncorr_isLoaded = false;
		btags_disc_uncorr_isLoaded = false;
		btags_isLoaded = false;
		nbtags_isLoaded = false;
		sf_dilepTrig_hpt_isLoaded = false;
		sf_dilepTrig_lpt_isLoaded = false;
		sf_dilepTrig_vlpt_isLoaded = false;
		hyp_type_isLoaded = false;
		sf_dilep_eff_isLoaded = false;
		mt_isLoaded = false;
		mt_l2_isLoaded = false;
		mt2_isLoaded = false;
		mGluino_isLoaded = false;
		mLSP_isLoaded = false;
		mSbottom_isLoaded = false;
		mChargino_isLoaded = false;
		lep1_id_gen_isLoaded = false;
		lep2_id_gen_isLoaded = false;
		lep1_p4_gen_isLoaded = false;
		lep2_p4_gen_isLoaded = false;
		lep3_id_isLoaded = false;
		lep3_idx_isLoaded = false;
		lep3_p4_isLoaded = false;
		lep1_iso_isLoaded = false;
		lep2_iso_isLoaded = false;
		dilep_p4_isLoaded = false;
		sample_isLoaded = false;
		genps_p4_isLoaded = false;
		genps_id_isLoaded = false;
		genps_id_mother_isLoaded = false;
		genps_status_isLoaded = false;
		genps_id_grandma_isLoaded = false;
		lep1_passes_id_isLoaded = false;
		lep2_passes_id_isLoaded = false;
		lep1_d0_isLoaded = false;
		lep2_d0_isLoaded = false;
		lep1_dZ_isLoaded = false;
		lep2_dZ_isLoaded = false;
		lep1_d0_err_isLoaded = false;
		lep2_d0_err_isLoaded = false;
		el_p4_isLoaded = false;
		el_id_isLoaded = false;
		el_idx_isLoaded = false;
		el_d0_isLoaded = false;
		el_dZ_isLoaded = false;
		el_d0_err_isLoaded = false;
		el_motherID_isLoaded = false;
		el_mc_id_isLoaded = false;
		el_iso_isLoaded = false;
		el_passes_id_isLoaded = false;
		el_FO_isLoaded = false;
		mu_p4_isLoaded = false;
		mu_id_isLoaded = false;
		mu_idx_isLoaded = false;
		mu_d0_isLoaded = false;
		mu_dZ_isLoaded = false;
		mu_d0_err_isLoaded = false;
		mu_motherID_isLoaded = false;
		mu_mc_id_isLoaded = false;
		mu_iso_isLoaded = false;
		mu_passes_id_isLoaded = false;
		mu_FO_isLoaded = false;
	}

void LoadAllBranches() 
	// load all branches
{
	if (met_branch != 0) met();
	if (metPhi_branch != 0) metPhi();
	if (event_branch != 0) event();
	if (lumi_branch != 0) lumi();
	if (run_branch != 0) run();
	if (filt_csc_branch != 0) filt_csc();
	if (filt_hbhe_branch != 0) filt_hbhe();
	if (filt_hcallaser_branch != 0) filt_hcallaser();
	if (filt_ecaltp_branch != 0) filt_ecaltp();
	if (filt_trkfail_branch != 0) filt_trkfail();
	if (filt_eebadsc_branch != 0) filt_eebadsc();
	if (is_real_data_branch != 0) is_real_data();
	if (scale1fb_branch != 0) scale1fb();
	if (xsec_branch != 0) xsec();
	if (kfactor_branch != 0) kfactor();
	if (gen_met_branch != 0) gen_met();
	if (gen_met_phi_branch != 0) gen_met_phi();
	if (njets_branch != 0) njets();
	if (best_hyp_branch != 0) best_hyp();
	if (hyp_class_branch != 0) hyp_class();
	if (lep1_p4_branch != 0) lep1_p4();
	if (lep2_p4_branch != 0) lep2_p4();
	if (ht_branch != 0) ht();
	if (nbtags_uncorr_branch != 0) nbtags_uncorr();
	if (lep1_motherID_branch != 0) lep1_motherID();
	if (lep2_motherID_branch != 0) lep2_motherID();
	if (lep1_mc_id_branch != 0) lep1_mc_id();
	if (lep2_mc_id_branch != 0) lep2_mc_id();
	if (lep1_id_branch != 0) lep1_id();
	if (lep2_id_branch != 0) lep2_id();
	if (lep1_idx_branch != 0) lep1_idx();
	if (lep2_idx_branch != 0) lep2_idx();
	if (jets_branch != 0) jets();
	if (btags_p4_uncorr_branch != 0) btags_p4_uncorr();
	if (btags_disc_uncorr_branch != 0) btags_disc_uncorr();
	if (btags_branch != 0) btags();
	if (nbtags_branch != 0) nbtags();
	if (sf_dilepTrig_hpt_branch != 0) sf_dilepTrig_hpt();
	if (sf_dilepTrig_lpt_branch != 0) sf_dilepTrig_lpt();
	if (sf_dilepTrig_vlpt_branch != 0) sf_dilepTrig_vlpt();
	if (hyp_type_branch != 0) hyp_type();
	if (sf_dilep_eff_branch != 0) sf_dilep_eff();
	if (mt_branch != 0) mt();
	if (mt_l2_branch != 0) mt_l2();
	if (mt2_branch != 0) mt2();
	if (mGluino_branch != 0) mGluino();
	if (mLSP_branch != 0) mLSP();
	if (mSbottom_branch != 0) mSbottom();
	if (mChargino_branch != 0) mChargino();
	if (lep1_id_gen_branch != 0) lep1_id_gen();
	if (lep2_id_gen_branch != 0) lep2_id_gen();
	if (lep1_p4_gen_branch != 0) lep1_p4_gen();
	if (lep2_p4_gen_branch != 0) lep2_p4_gen();
	if (lep3_id_branch != 0) lep3_id();
	if (lep3_idx_branch != 0) lep3_idx();
	if (lep3_p4_branch != 0) lep3_p4();
	if (lep1_iso_branch != 0) lep1_iso();
	if (lep2_iso_branch != 0) lep2_iso();
	if (dilep_p4_branch != 0) dilep_p4();
	if (sample_branch != 0) sample();
	if (genps_p4_branch != 0) genps_p4();
	if (genps_id_branch != 0) genps_id();
	if (genps_id_mother_branch != 0) genps_id_mother();
	if (genps_status_branch != 0) genps_status();
	if (genps_id_grandma_branch != 0) genps_id_grandma();
	if (lep1_passes_id_branch != 0) lep1_passes_id();
	if (lep2_passes_id_branch != 0) lep2_passes_id();
	if (lep1_d0_branch != 0) lep1_d0();
	if (lep2_d0_branch != 0) lep2_d0();
	if (lep1_dZ_branch != 0) lep1_dZ();
	if (lep2_dZ_branch != 0) lep2_dZ();
	if (lep1_d0_err_branch != 0) lep1_d0_err();
	if (lep2_d0_err_branch != 0) lep2_d0_err();
	if (el_p4_branch != 0) el_p4();
	if (el_id_branch != 0) el_id();
	if (el_idx_branch != 0) el_idx();
	if (el_d0_branch != 0) el_d0();
	if (el_dZ_branch != 0) el_dZ();
	if (el_d0_err_branch != 0) el_d0_err();
	if (el_motherID_branch != 0) el_motherID();
	if (el_mc_id_branch != 0) el_mc_id();
	if (el_iso_branch != 0) el_iso();
	if (el_passes_id_branch != 0) el_passes_id();
	if (el_FO_branch != 0) el_FO();
	if (mu_p4_branch != 0) mu_p4();
	if (mu_id_branch != 0) mu_id();
	if (mu_idx_branch != 0) mu_idx();
	if (mu_d0_branch != 0) mu_d0();
	if (mu_dZ_branch != 0) mu_dZ();
	if (mu_d0_err_branch != 0) mu_d0_err();
	if (mu_motherID_branch != 0) mu_motherID();
	if (mu_mc_id_branch != 0) mu_mc_id();
	if (mu_iso_branch != 0) mu_iso();
	if (mu_passes_id_branch != 0) mu_passes_id();
	if (mu_FO_branch != 0) mu_FO();
}

	float &met()
	{
		if (not met_isLoaded) {
			if (met_branch != 0) {
				met_branch->GetEntry(index);
			} else { 
				printf("branch met_branch does not exist!\n");
				exit(1);
			}
			met_isLoaded = true;
		}
		return met_;
	}
	float &metPhi()
	{
		if (not metPhi_isLoaded) {
			if (metPhi_branch != 0) {
				metPhi_branch->GetEntry(index);
			} else { 
				printf("branch metPhi_branch does not exist!\n");
				exit(1);
			}
			metPhi_isLoaded = true;
		}
		return metPhi_;
	}
	int &event()
	{
		if (not event_isLoaded) {
			if (event_branch != 0) {
				event_branch->GetEntry(index);
			} else { 
				printf("branch event_branch does not exist!\n");
				exit(1);
			}
			event_isLoaded = true;
		}
		return event_;
	}
	int &lumi()
	{
		if (not lumi_isLoaded) {
			if (lumi_branch != 0) {
				lumi_branch->GetEntry(index);
			} else { 
				printf("branch lumi_branch does not exist!\n");
				exit(1);
			}
			lumi_isLoaded = true;
		}
		return lumi_;
	}
	int &run()
	{
		if (not run_isLoaded) {
			if (run_branch != 0) {
				run_branch->GetEntry(index);
			} else { 
				printf("branch run_branch does not exist!\n");
				exit(1);
			}
			run_isLoaded = true;
		}
		return run_;
	}
	bool &	filt_csc()
	{
		if (not filt_csc_isLoaded) {
			if (filt_csc_branch != 0) {
				filt_csc_branch->GetEntry(index);
			} else { 
				printf("branch filt_csc_branch does not exist!\n");
				exit(1);
			}
			filt_csc_isLoaded = true;
		}
		return filt_csc_;
	}
	bool &	filt_hbhe()
	{
		if (not filt_hbhe_isLoaded) {
			if (filt_hbhe_branch != 0) {
				filt_hbhe_branch->GetEntry(index);
			} else { 
				printf("branch filt_hbhe_branch does not exist!\n");
				exit(1);
			}
			filt_hbhe_isLoaded = true;
		}
		return filt_hbhe_;
	}
	bool &	filt_hcallaser()
	{
		if (not filt_hcallaser_isLoaded) {
			if (filt_hcallaser_branch != 0) {
				filt_hcallaser_branch->GetEntry(index);
			} else { 
				printf("branch filt_hcallaser_branch does not exist!\n");
				exit(1);
			}
			filt_hcallaser_isLoaded = true;
		}
		return filt_hcallaser_;
	}
	bool &	filt_ecaltp()
	{
		if (not filt_ecaltp_isLoaded) {
			if (filt_ecaltp_branch != 0) {
				filt_ecaltp_branch->GetEntry(index);
			} else { 
				printf("branch filt_ecaltp_branch does not exist!\n");
				exit(1);
			}
			filt_ecaltp_isLoaded = true;
		}
		return filt_ecaltp_;
	}
	bool &	filt_trkfail()
	{
		if (not filt_trkfail_isLoaded) {
			if (filt_trkfail_branch != 0) {
				filt_trkfail_branch->GetEntry(index);
			} else { 
				printf("branch filt_trkfail_branch does not exist!\n");
				exit(1);
			}
			filt_trkfail_isLoaded = true;
		}
		return filt_trkfail_;
	}
	bool &	filt_eebadsc()
	{
		if (not filt_eebadsc_isLoaded) {
			if (filt_eebadsc_branch != 0) {
				filt_eebadsc_branch->GetEntry(index);
			} else { 
				printf("branch filt_eebadsc_branch does not exist!\n");
				exit(1);
			}
			filt_eebadsc_isLoaded = true;
		}
		return filt_eebadsc_;
	}
	bool &	is_real_data()
	{
		if (not is_real_data_isLoaded) {
			if (is_real_data_branch != 0) {
				is_real_data_branch->GetEntry(index);
			} else { 
				printf("branch is_real_data_branch does not exist!\n");
				exit(1);
			}
			is_real_data_isLoaded = true;
		}
		return is_real_data_;
	}
	float &scale1fb()
	{
		if (not scale1fb_isLoaded) {
			if (scale1fb_branch != 0) {
				scale1fb_branch->GetEntry(index);
			} else { 
				printf("branch scale1fb_branch does not exist!\n");
				exit(1);
			}
			scale1fb_isLoaded = true;
		}
		return scale1fb_;
	}
	float &xsec()
	{
		if (not xsec_isLoaded) {
			if (xsec_branch != 0) {
				xsec_branch->GetEntry(index);
			} else { 
				printf("branch xsec_branch does not exist!\n");
				exit(1);
			}
			xsec_isLoaded = true;
		}
		return xsec_;
	}
	float &kfactor()
	{
		if (not kfactor_isLoaded) {
			if (kfactor_branch != 0) {
				kfactor_branch->GetEntry(index);
			} else { 
				printf("branch kfactor_branch does not exist!\n");
				exit(1);
			}
			kfactor_isLoaded = true;
		}
		return kfactor_;
	}
	float &gen_met()
	{
		if (not gen_met_isLoaded) {
			if (gen_met_branch != 0) {
				gen_met_branch->GetEntry(index);
			} else { 
				printf("branch gen_met_branch does not exist!\n");
				exit(1);
			}
			gen_met_isLoaded = true;
		}
		return gen_met_;
	}
	float &gen_met_phi()
	{
		if (not gen_met_phi_isLoaded) {
			if (gen_met_phi_branch != 0) {
				gen_met_phi_branch->GetEntry(index);
			} else { 
				printf("branch gen_met_phi_branch does not exist!\n");
				exit(1);
			}
			gen_met_phi_isLoaded = true;
		}
		return gen_met_phi_;
	}
	float &njets()
	{
		if (not njets_isLoaded) {
			if (njets_branch != 0) {
				njets_branch->GetEntry(index);
			} else { 
				printf("branch njets_branch does not exist!\n");
				exit(1);
			}
			njets_isLoaded = true;
		}
		return njets_;
	}
	int &best_hyp()
	{
		if (not best_hyp_isLoaded) {
			if (best_hyp_branch != 0) {
				best_hyp_branch->GetEntry(index);
			} else { 
				printf("branch best_hyp_branch does not exist!\n");
				exit(1);
			}
			best_hyp_isLoaded = true;
		}
		return best_hyp_;
	}
	int &hyp_class()
	{
		if (not hyp_class_isLoaded) {
			if (hyp_class_branch != 0) {
				hyp_class_branch->GetEntry(index);
			} else { 
				printf("branch hyp_class_branch does not exist!\n");
				exit(1);
			}
			hyp_class_isLoaded = true;
		}
		return hyp_class_;
	}
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &lep1_p4()
	{
		if (not lep1_p4_isLoaded) {
			if (lep1_p4_branch != 0) {
				lep1_p4_branch->GetEntry(index);
			} else { 
				printf("branch lep1_p4_branch does not exist!\n");
				exit(1);
			}
			lep1_p4_isLoaded = true;
		}
		return *lep1_p4_;
	}
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &lep2_p4()
	{
		if (not lep2_p4_isLoaded) {
			if (lep2_p4_branch != 0) {
				lep2_p4_branch->GetEntry(index);
			} else { 
				printf("branch lep2_p4_branch does not exist!\n");
				exit(1);
			}
			lep2_p4_isLoaded = true;
		}
		return *lep2_p4_;
	}
	float &ht()
	{
		if (not ht_isLoaded) {
			if (ht_branch != 0) {
				ht_branch->GetEntry(index);
			} else { 
				printf("branch ht_branch does not exist!\n");
				exit(1);
			}
			ht_isLoaded = true;
		}
		return ht_;
	}
	int &nbtags_uncorr()
	{
		if (not nbtags_uncorr_isLoaded) {
			if (nbtags_uncorr_branch != 0) {
				nbtags_uncorr_branch->GetEntry(index);
			} else { 
				printf("branch nbtags_uncorr_branch does not exist!\n");
				exit(1);
			}
			nbtags_uncorr_isLoaded = true;
		}
		return nbtags_uncorr_;
	}
	int &lep1_motherID()
	{
		if (not lep1_motherID_isLoaded) {
			if (lep1_motherID_branch != 0) {
				lep1_motherID_branch->GetEntry(index);
			} else { 
				printf("branch lep1_motherID_branch does not exist!\n");
				exit(1);
			}
			lep1_motherID_isLoaded = true;
		}
		return lep1_motherID_;
	}
	int &lep2_motherID()
	{
		if (not lep2_motherID_isLoaded) {
			if (lep2_motherID_branch != 0) {
				lep2_motherID_branch->GetEntry(index);
			} else { 
				printf("branch lep2_motherID_branch does not exist!\n");
				exit(1);
			}
			lep2_motherID_isLoaded = true;
		}
		return lep2_motherID_;
	}
	int &lep1_mc_id()
	{
		if (not lep1_mc_id_isLoaded) {
			if (lep1_mc_id_branch != 0) {
				lep1_mc_id_branch->GetEntry(index);
			} else { 
				printf("branch lep1_mc_id_branch does not exist!\n");
				exit(1);
			}
			lep1_mc_id_isLoaded = true;
		}
		return lep1_mc_id_;
	}
	int &lep2_mc_id()
	{
		if (not lep2_mc_id_isLoaded) {
			if (lep2_mc_id_branch != 0) {
				lep2_mc_id_branch->GetEntry(index);
			} else { 
				printf("branch lep2_mc_id_branch does not exist!\n");
				exit(1);
			}
			lep2_mc_id_isLoaded = true;
		}
		return lep2_mc_id_;
	}
	int &lep1_id()
	{
		if (not lep1_id_isLoaded) {
			if (lep1_id_branch != 0) {
				lep1_id_branch->GetEntry(index);
			} else { 
				printf("branch lep1_id_branch does not exist!\n");
				exit(1);
			}
			lep1_id_isLoaded = true;
		}
		return lep1_id_;
	}
	int &lep2_id()
	{
		if (not lep2_id_isLoaded) {
			if (lep2_id_branch != 0) {
				lep2_id_branch->GetEntry(index);
			} else { 
				printf("branch lep2_id_branch does not exist!\n");
				exit(1);
			}
			lep2_id_isLoaded = true;
		}
		return lep2_id_;
	}
	int &lep1_idx()
	{
		if (not lep1_idx_isLoaded) {
			if (lep1_idx_branch != 0) {
				lep1_idx_branch->GetEntry(index);
			} else { 
				printf("branch lep1_idx_branch does not exist!\n");
				exit(1);
			}
			lep1_idx_isLoaded = true;
		}
		return lep1_idx_;
	}
	int &lep2_idx()
	{
		if (not lep2_idx_isLoaded) {
			if (lep2_idx_branch != 0) {
				lep2_idx_branch->GetEntry(index);
			} else { 
				printf("branch lep2_idx_branch does not exist!\n");
				exit(1);
			}
			lep2_idx_isLoaded = true;
		}
		return lep2_idx_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &jets()
	{
		if (not jets_isLoaded) {
			if (jets_branch != 0) {
				jets_branch->GetEntry(index);
			} else { 
				printf("branch jets_branch does not exist!\n");
				exit(1);
			}
			jets_isLoaded = true;
		}
		return *jets_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &btags_p4_uncorr()
	{
		if (not btags_p4_uncorr_isLoaded) {
			if (btags_p4_uncorr_branch != 0) {
				btags_p4_uncorr_branch->GetEntry(index);
			} else { 
				printf("branch btags_p4_uncorr_branch does not exist!\n");
				exit(1);
			}
			btags_p4_uncorr_isLoaded = true;
		}
		return *btags_p4_uncorr_;
	}
	vector<float> &btags_disc_uncorr()
	{
		if (not btags_disc_uncorr_isLoaded) {
			if (btags_disc_uncorr_branch != 0) {
				btags_disc_uncorr_branch->GetEntry(index);
			} else { 
				printf("branch btags_disc_uncorr_branch does not exist!\n");
				exit(1);
			}
			btags_disc_uncorr_isLoaded = true;
		}
		return *btags_disc_uncorr_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &btags()
	{
		if (not btags_isLoaded) {
			if (btags_branch != 0) {
				btags_branch->GetEntry(index);
			} else { 
				printf("branch btags_branch does not exist!\n");
				exit(1);
			}
			btags_isLoaded = true;
		}
		return *btags_;
	}
	int &nbtags()
	{
		if (not nbtags_isLoaded) {
			if (nbtags_branch != 0) {
				nbtags_branch->GetEntry(index);
			} else { 
				printf("branch nbtags_branch does not exist!\n");
				exit(1);
			}
			nbtags_isLoaded = true;
		}
		return nbtags_;
	}
	float &sf_dilepTrig_hpt()
	{
		if (not sf_dilepTrig_hpt_isLoaded) {
			if (sf_dilepTrig_hpt_branch != 0) {
				sf_dilepTrig_hpt_branch->GetEntry(index);
			} else { 
				printf("branch sf_dilepTrig_hpt_branch does not exist!\n");
				exit(1);
			}
			sf_dilepTrig_hpt_isLoaded = true;
		}
		return sf_dilepTrig_hpt_;
	}
	float &sf_dilepTrig_lpt()
	{
		if (not sf_dilepTrig_lpt_isLoaded) {
			if (sf_dilepTrig_lpt_branch != 0) {
				sf_dilepTrig_lpt_branch->GetEntry(index);
			} else { 
				printf("branch sf_dilepTrig_lpt_branch does not exist!\n");
				exit(1);
			}
			sf_dilepTrig_lpt_isLoaded = true;
		}
		return sf_dilepTrig_lpt_;
	}
	float &sf_dilepTrig_vlpt()
	{
		if (not sf_dilepTrig_vlpt_isLoaded) {
			if (sf_dilepTrig_vlpt_branch != 0) {
				sf_dilepTrig_vlpt_branch->GetEntry(index);
			} else { 
				printf("branch sf_dilepTrig_vlpt_branch does not exist!\n");
				exit(1);
			}
			sf_dilepTrig_vlpt_isLoaded = true;
		}
		return sf_dilepTrig_vlpt_;
	}
	int &hyp_type()
	{
		if (not hyp_type_isLoaded) {
			if (hyp_type_branch != 0) {
				hyp_type_branch->GetEntry(index);
			} else { 
				printf("branch hyp_type_branch does not exist!\n");
				exit(1);
			}
			hyp_type_isLoaded = true;
		}
		return hyp_type_;
	}
	float &sf_dilep_eff()
	{
		if (not sf_dilep_eff_isLoaded) {
			if (sf_dilep_eff_branch != 0) {
				sf_dilep_eff_branch->GetEntry(index);
			} else { 
				printf("branch sf_dilep_eff_branch does not exist!\n");
				exit(1);
			}
			sf_dilep_eff_isLoaded = true;
		}
		return sf_dilep_eff_;
	}
	float &mt()
	{
		if (not mt_isLoaded) {
			if (mt_branch != 0) {
				mt_branch->GetEntry(index);
			} else { 
				printf("branch mt_branch does not exist!\n");
				exit(1);
			}
			mt_isLoaded = true;
		}
		return mt_;
	}
	float &mt_l2()
	{
		if (not mt_l2_isLoaded) {
			if (mt_l2_branch != 0) {
				mt_l2_branch->GetEntry(index);
			} else { 
				printf("branch mt_l2_branch does not exist!\n");
				exit(1);
			}
			mt_l2_isLoaded = true;
		}
		return mt_l2_;
	}
	float &mt2()
	{
		if (not mt2_isLoaded) {
			if (mt2_branch != 0) {
				mt2_branch->GetEntry(index);
			} else { 
				printf("branch mt2_branch does not exist!\n");
				exit(1);
			}
			mt2_isLoaded = true;
		}
		return mt2_;
	}
	float &mGluino()
	{
		if (not mGluino_isLoaded) {
			if (mGluino_branch != 0) {
				mGluino_branch->GetEntry(index);
			} else { 
				printf("branch mGluino_branch does not exist!\n");
				exit(1);
			}
			mGluino_isLoaded = true;
		}
		return mGluino_;
	}
	float &mLSP()
	{
		if (not mLSP_isLoaded) {
			if (mLSP_branch != 0) {
				mLSP_branch->GetEntry(index);
			} else { 
				printf("branch mLSP_branch does not exist!\n");
				exit(1);
			}
			mLSP_isLoaded = true;
		}
		return mLSP_;
	}
	float &mSbottom()
	{
		if (not mSbottom_isLoaded) {
			if (mSbottom_branch != 0) {
				mSbottom_branch->GetEntry(index);
			} else { 
				printf("branch mSbottom_branch does not exist!\n");
				exit(1);
			}
			mSbottom_isLoaded = true;
		}
		return mSbottom_;
	}
	float &mChargino()
	{
		if (not mChargino_isLoaded) {
			if (mChargino_branch != 0) {
				mChargino_branch->GetEntry(index);
			} else { 
				printf("branch mChargino_branch does not exist!\n");
				exit(1);
			}
			mChargino_isLoaded = true;
		}
		return mChargino_;
	}
	int &lep1_id_gen()
	{
		if (not lep1_id_gen_isLoaded) {
			if (lep1_id_gen_branch != 0) {
				lep1_id_gen_branch->GetEntry(index);
			} else { 
				printf("branch lep1_id_gen_branch does not exist!\n");
				exit(1);
			}
			lep1_id_gen_isLoaded = true;
		}
		return lep1_id_gen_;
	}
	int &lep2_id_gen()
	{
		if (not lep2_id_gen_isLoaded) {
			if (lep2_id_gen_branch != 0) {
				lep2_id_gen_branch->GetEntry(index);
			} else { 
				printf("branch lep2_id_gen_branch does not exist!\n");
				exit(1);
			}
			lep2_id_gen_isLoaded = true;
		}
		return lep2_id_gen_;
	}
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &lep1_p4_gen()
	{
		if (not lep1_p4_gen_isLoaded) {
			if (lep1_p4_gen_branch != 0) {
				lep1_p4_gen_branch->GetEntry(index);
			} else { 
				printf("branch lep1_p4_gen_branch does not exist!\n");
				exit(1);
			}
			lep1_p4_gen_isLoaded = true;
		}
		return *lep1_p4_gen_;
	}
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &lep2_p4_gen()
	{
		if (not lep2_p4_gen_isLoaded) {
			if (lep2_p4_gen_branch != 0) {
				lep2_p4_gen_branch->GetEntry(index);
			} else { 
				printf("branch lep2_p4_gen_branch does not exist!\n");
				exit(1);
			}
			lep2_p4_gen_isLoaded = true;
		}
		return *lep2_p4_gen_;
	}
	int &lep3_id()
	{
		if (not lep3_id_isLoaded) {
			if (lep3_id_branch != 0) {
				lep3_id_branch->GetEntry(index);
			} else { 
				printf("branch lep3_id_branch does not exist!\n");
				exit(1);
			}
			lep3_id_isLoaded = true;
		}
		return lep3_id_;
	}
	int &lep3_idx()
	{
		if (not lep3_idx_isLoaded) {
			if (lep3_idx_branch != 0) {
				lep3_idx_branch->GetEntry(index);
			} else { 
				printf("branch lep3_idx_branch does not exist!\n");
				exit(1);
			}
			lep3_idx_isLoaded = true;
		}
		return lep3_idx_;
	}
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &lep3_p4()
	{
		if (not lep3_p4_isLoaded) {
			if (lep3_p4_branch != 0) {
				lep3_p4_branch->GetEntry(index);
			} else { 
				printf("branch lep3_p4_branch does not exist!\n");
				exit(1);
			}
			lep3_p4_isLoaded = true;
		}
		return *lep3_p4_;
	}
	float &lep1_iso()
	{
		if (not lep1_iso_isLoaded) {
			if (lep1_iso_branch != 0) {
				lep1_iso_branch->GetEntry(index);
			} else { 
				printf("branch lep1_iso_branch does not exist!\n");
				exit(1);
			}
			lep1_iso_isLoaded = true;
		}
		return lep1_iso_;
	}
	float &lep2_iso()
	{
		if (not lep2_iso_isLoaded) {
			if (lep2_iso_branch != 0) {
				lep2_iso_branch->GetEntry(index);
			} else { 
				printf("branch lep2_iso_branch does not exist!\n");
				exit(1);
			}
			lep2_iso_isLoaded = true;
		}
		return lep2_iso_;
	}
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &dilep_p4()
	{
		if (not dilep_p4_isLoaded) {
			if (dilep_p4_branch != 0) {
				dilep_p4_branch->GetEntry(index);
			} else { 
				printf("branch dilep_p4_branch does not exist!\n");
				exit(1);
			}
			dilep_p4_isLoaded = true;
		}
		return *dilep_p4_;
	}
	TString &sample()
	{
		if (not sample_isLoaded) {
			if (sample_branch != 0) {
				sample_branch->GetEntry(index);
			} else { 
				printf("branch sample_branch does not exist!\n");
				exit(1);
			}
			sample_isLoaded = true;
		}
		return *sample_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &genps_p4()
	{
		if (not genps_p4_isLoaded) {
			if (genps_p4_branch != 0) {
				genps_p4_branch->GetEntry(index);
			} else { 
				printf("branch genps_p4_branch does not exist!\n");
				exit(1);
			}
			genps_p4_isLoaded = true;
		}
		return *genps_p4_;
	}
	vector<int> &genps_id()
	{
		if (not genps_id_isLoaded) {
			if (genps_id_branch != 0) {
				genps_id_branch->GetEntry(index);
			} else { 
				printf("branch genps_id_branch does not exist!\n");
				exit(1);
			}
			genps_id_isLoaded = true;
		}
		return *genps_id_;
	}
	vector<int> &genps_id_mother()
	{
		if (not genps_id_mother_isLoaded) {
			if (genps_id_mother_branch != 0) {
				genps_id_mother_branch->GetEntry(index);
			} else { 
				printf("branch genps_id_mother_branch does not exist!\n");
				exit(1);
			}
			genps_id_mother_isLoaded = true;
		}
		return *genps_id_mother_;
	}
	vector<int> &genps_status()
	{
		if (not genps_status_isLoaded) {
			if (genps_status_branch != 0) {
				genps_status_branch->GetEntry(index);
			} else { 
				printf("branch genps_status_branch does not exist!\n");
				exit(1);
			}
			genps_status_isLoaded = true;
		}
		return *genps_status_;
	}
	vector<int> &genps_id_grandma()
	{
		if (not genps_id_grandma_isLoaded) {
			if (genps_id_grandma_branch != 0) {
				genps_id_grandma_branch->GetEntry(index);
			} else { 
				printf("branch genps_id_grandma_branch does not exist!\n");
				exit(1);
			}
			genps_id_grandma_isLoaded = true;
		}
		return *genps_id_grandma_;
	}
	bool &	lep1_passes_id()
	{
		if (not lep1_passes_id_isLoaded) {
			if (lep1_passes_id_branch != 0) {
				lep1_passes_id_branch->GetEntry(index);
			} else { 
				printf("branch lep1_passes_id_branch does not exist!\n");
				exit(1);
			}
			lep1_passes_id_isLoaded = true;
		}
		return lep1_passes_id_;
	}
	bool &	lep2_passes_id()
	{
		if (not lep2_passes_id_isLoaded) {
			if (lep2_passes_id_branch != 0) {
				lep2_passes_id_branch->GetEntry(index);
			} else { 
				printf("branch lep2_passes_id_branch does not exist!\n");
				exit(1);
			}
			lep2_passes_id_isLoaded = true;
		}
		return lep2_passes_id_;
	}
	float &lep1_d0()
	{
		if (not lep1_d0_isLoaded) {
			if (lep1_d0_branch != 0) {
				lep1_d0_branch->GetEntry(index);
			} else { 
				printf("branch lep1_d0_branch does not exist!\n");
				exit(1);
			}
			lep1_d0_isLoaded = true;
		}
		return lep1_d0_;
	}
	float &lep2_d0()
	{
		if (not lep2_d0_isLoaded) {
			if (lep2_d0_branch != 0) {
				lep2_d0_branch->GetEntry(index);
			} else { 
				printf("branch lep2_d0_branch does not exist!\n");
				exit(1);
			}
			lep2_d0_isLoaded = true;
		}
		return lep2_d0_;
	}
	float &lep1_dZ()
	{
		if (not lep1_dZ_isLoaded) {
			if (lep1_dZ_branch != 0) {
				lep1_dZ_branch->GetEntry(index);
			} else { 
				printf("branch lep1_dZ_branch does not exist!\n");
				exit(1);
			}
			lep1_dZ_isLoaded = true;
		}
		return lep1_dZ_;
	}
	float &lep2_dZ()
	{
		if (not lep2_dZ_isLoaded) {
			if (lep2_dZ_branch != 0) {
				lep2_dZ_branch->GetEntry(index);
			} else { 
				printf("branch lep2_dZ_branch does not exist!\n");
				exit(1);
			}
			lep2_dZ_isLoaded = true;
		}
		return lep2_dZ_;
	}
	float &lep1_d0_err()
	{
		if (not lep1_d0_err_isLoaded) {
			if (lep1_d0_err_branch != 0) {
				lep1_d0_err_branch->GetEntry(index);
			} else { 
				printf("branch lep1_d0_err_branch does not exist!\n");
				exit(1);
			}
			lep1_d0_err_isLoaded = true;
		}
		return lep1_d0_err_;
	}
	float &lep2_d0_err()
	{
		if (not lep2_d0_err_isLoaded) {
			if (lep2_d0_err_branch != 0) {
				lep2_d0_err_branch->GetEntry(index);
			} else { 
				printf("branch lep2_d0_err_branch does not exist!\n");
				exit(1);
			}
			lep2_d0_err_isLoaded = true;
		}
		return lep2_d0_err_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &el_p4()
	{
		if (not el_p4_isLoaded) {
			if (el_p4_branch != 0) {
				el_p4_branch->GetEntry(index);
			} else { 
				printf("branch el_p4_branch does not exist!\n");
				exit(1);
			}
			el_p4_isLoaded = true;
		}
		return *el_p4_;
	}
	vector<int> &el_id()
	{
		if (not el_id_isLoaded) {
			if (el_id_branch != 0) {
				el_id_branch->GetEntry(index);
			} else { 
				printf("branch el_id_branch does not exist!\n");
				exit(1);
			}
			el_id_isLoaded = true;
		}
		return *el_id_;
	}
	vector<int> &el_idx()
	{
		if (not el_idx_isLoaded) {
			if (el_idx_branch != 0) {
				el_idx_branch->GetEntry(index);
			} else { 
				printf("branch el_idx_branch does not exist!\n");
				exit(1);
			}
			el_idx_isLoaded = true;
		}
		return *el_idx_;
	}
	vector<float> &el_d0()
	{
		if (not el_d0_isLoaded) {
			if (el_d0_branch != 0) {
				el_d0_branch->GetEntry(index);
			} else { 
				printf("branch el_d0_branch does not exist!\n");
				exit(1);
			}
			el_d0_isLoaded = true;
		}
		return *el_d0_;
	}
	vector<float> &el_dZ()
	{
		if (not el_dZ_isLoaded) {
			if (el_dZ_branch != 0) {
				el_dZ_branch->GetEntry(index);
			} else { 
				printf("branch el_dZ_branch does not exist!\n");
				exit(1);
			}
			el_dZ_isLoaded = true;
		}
		return *el_dZ_;
	}
	vector<float> &el_d0_err()
	{
		if (not el_d0_err_isLoaded) {
			if (el_d0_err_branch != 0) {
				el_d0_err_branch->GetEntry(index);
			} else { 
				printf("branch el_d0_err_branch does not exist!\n");
				exit(1);
			}
			el_d0_err_isLoaded = true;
		}
		return *el_d0_err_;
	}
	vector<int> &el_motherID()
	{
		if (not el_motherID_isLoaded) {
			if (el_motherID_branch != 0) {
				el_motherID_branch->GetEntry(index);
			} else { 
				printf("branch el_motherID_branch does not exist!\n");
				exit(1);
			}
			el_motherID_isLoaded = true;
		}
		return *el_motherID_;
	}
	vector<int> &el_mc_id()
	{
		if (not el_mc_id_isLoaded) {
			if (el_mc_id_branch != 0) {
				el_mc_id_branch->GetEntry(index);
			} else { 
				printf("branch el_mc_id_branch does not exist!\n");
				exit(1);
			}
			el_mc_id_isLoaded = true;
		}
		return *el_mc_id_;
	}
	vector<float> &el_iso()
	{
		if (not el_iso_isLoaded) {
			if (el_iso_branch != 0) {
				el_iso_branch->GetEntry(index);
			} else { 
				printf("branch el_iso_branch does not exist!\n");
				exit(1);
			}
			el_iso_isLoaded = true;
		}
		return *el_iso_;
	}
	vector<bool> &el_passes_id()
	{
		if (not el_passes_id_isLoaded) {
			if (el_passes_id_branch != 0) {
				el_passes_id_branch->GetEntry(index);
			} else { 
				printf("branch el_passes_id_branch does not exist!\n");
				exit(1);
			}
			el_passes_id_isLoaded = true;
		}
		return *el_passes_id_;
	}
	vector<bool> &el_FO()
	{
		if (not el_FO_isLoaded) {
			if (el_FO_branch != 0) {
				el_FO_branch->GetEntry(index);
			} else { 
				printf("branch el_FO_branch does not exist!\n");
				exit(1);
			}
			el_FO_isLoaded = true;
		}
		return *el_FO_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &mu_p4()
	{
		if (not mu_p4_isLoaded) {
			if (mu_p4_branch != 0) {
				mu_p4_branch->GetEntry(index);
			} else { 
				printf("branch mu_p4_branch does not exist!\n");
				exit(1);
			}
			mu_p4_isLoaded = true;
		}
		return *mu_p4_;
	}
	vector<int> &mu_id()
	{
		if (not mu_id_isLoaded) {
			if (mu_id_branch != 0) {
				mu_id_branch->GetEntry(index);
			} else { 
				printf("branch mu_id_branch does not exist!\n");
				exit(1);
			}
			mu_id_isLoaded = true;
		}
		return *mu_id_;
	}
	vector<int> &mu_idx()
	{
		if (not mu_idx_isLoaded) {
			if (mu_idx_branch != 0) {
				mu_idx_branch->GetEntry(index);
			} else { 
				printf("branch mu_idx_branch does not exist!\n");
				exit(1);
			}
			mu_idx_isLoaded = true;
		}
		return *mu_idx_;
	}
	vector<float> &mu_d0()
	{
		if (not mu_d0_isLoaded) {
			if (mu_d0_branch != 0) {
				mu_d0_branch->GetEntry(index);
			} else { 
				printf("branch mu_d0_branch does not exist!\n");
				exit(1);
			}
			mu_d0_isLoaded = true;
		}
		return *mu_d0_;
	}
	vector<float> &mu_dZ()
	{
		if (not mu_dZ_isLoaded) {
			if (mu_dZ_branch != 0) {
				mu_dZ_branch->GetEntry(index);
			} else { 
				printf("branch mu_dZ_branch does not exist!\n");
				exit(1);
			}
			mu_dZ_isLoaded = true;
		}
		return *mu_dZ_;
	}
	vector<float> &mu_d0_err()
	{
		if (not mu_d0_err_isLoaded) {
			if (mu_d0_err_branch != 0) {
				mu_d0_err_branch->GetEntry(index);
			} else { 
				printf("branch mu_d0_err_branch does not exist!\n");
				exit(1);
			}
			mu_d0_err_isLoaded = true;
		}
		return *mu_d0_err_;
	}
	vector<int> &mu_motherID()
	{
		if (not mu_motherID_isLoaded) {
			if (mu_motherID_branch != 0) {
				mu_motherID_branch->GetEntry(index);
			} else { 
				printf("branch mu_motherID_branch does not exist!\n");
				exit(1);
			}
			mu_motherID_isLoaded = true;
		}
		return *mu_motherID_;
	}
	vector<int> &mu_mc_id()
	{
		if (not mu_mc_id_isLoaded) {
			if (mu_mc_id_branch != 0) {
				mu_mc_id_branch->GetEntry(index);
			} else { 
				printf("branch mu_mc_id_branch does not exist!\n");
				exit(1);
			}
			mu_mc_id_isLoaded = true;
		}
		return *mu_mc_id_;
	}
	vector<float> &mu_iso()
	{
		if (not mu_iso_isLoaded) {
			if (mu_iso_branch != 0) {
				mu_iso_branch->GetEntry(index);
			} else { 
				printf("branch mu_iso_branch does not exist!\n");
				exit(1);
			}
			mu_iso_isLoaded = true;
		}
		return *mu_iso_;
	}
	vector<bool> &mu_passes_id()
	{
		if (not mu_passes_id_isLoaded) {
			if (mu_passes_id_branch != 0) {
				mu_passes_id_branch->GetEntry(index);
			} else { 
				printf("branch mu_passes_id_branch does not exist!\n");
				exit(1);
			}
			mu_passes_id_isLoaded = true;
		}
		return *mu_passes_id_;
	}
	vector<bool> &mu_FO()
	{
		if (not mu_FO_isLoaded) {
			if (mu_FO_branch != 0) {
				mu_FO_branch->GetEntry(index);
			} else { 
				printf("branch mu_FO_branch does not exist!\n");
				exit(1);
			}
			mu_FO_isLoaded = true;
		}
		return *mu_FO_;
	}

  static void progress( int nEventsTotal, int nEventsChain ){
    int period = 1000;
    if(nEventsTotal%1000 == 0) {
      // xterm magic from L. Vacavant and A. Cerri
      if (isatty(1)) {
        if( ( nEventsChain - nEventsTotal ) > period ){
          float frac = (float)nEventsTotal/(nEventsChain*0.01);
          printf("\015\033[32m ---> \033[1m\033[31m%4.1f%%"
               "\033[0m\033[32m <---\033[0m\015", frac);
          fflush(stdout);
        }
        else {
          printf("\015\033[32m ---> \033[1m\033[31m%4.1f%%"
                 "\033[0m\033[32m <---\033[0m\015", 100.);
          cout << endl;
        }
      }
    }
  }
  
};

#ifndef __CINT__
extern lepfilter ss;
#endif

namespace samesign {
	float &met();
	float &metPhi();
	int &event();
	int &lumi();
	int &run();
	bool &filt_csc();
	bool &filt_hbhe();
	bool &filt_hcallaser();
	bool &filt_ecaltp();
	bool &filt_trkfail();
	bool &filt_eebadsc();
	bool &is_real_data();
	float &scale1fb();
	float &xsec();
	float &kfactor();
	float &gen_met();
	float &gen_met_phi();
	float &njets();
	int &best_hyp();
	int &hyp_class();
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &lep1_p4();
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &lep2_p4();
	float &ht();
	int &nbtags_uncorr();
	int &lep1_motherID();
	int &lep2_motherID();
	int &lep1_mc_id();
	int &lep2_mc_id();
	int &lep1_id();
	int &lep2_id();
	int &lep1_idx();
	int &lep2_idx();
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &jets();
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &btags_p4_uncorr();
	vector<float> &btags_disc_uncorr();
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &btags();
	int &nbtags();
	float &sf_dilepTrig_hpt();
	float &sf_dilepTrig_lpt();
	float &sf_dilepTrig_vlpt();
	int &hyp_type();
	float &sf_dilep_eff();
	float &mt();
	float &mt_l2();
	float &mt2();
	float &mGluino();
	float &mLSP();
	float &mSbottom();
	float &mChargino();
	int &lep1_id_gen();
	int &lep2_id_gen();
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &lep1_p4_gen();
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &lep2_p4_gen();
	int &lep3_id();
	int &lep3_idx();
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &lep3_p4();
	float &lep1_iso();
	float &lep2_iso();
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &dilep_p4();
	TString &sample();
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &genps_p4();
	vector<int> &genps_id();
	vector<int> &genps_id_mother();
	vector<int> &genps_status();
	vector<int> &genps_id_grandma();
	bool &lep1_passes_id();
	bool &lep2_passes_id();
	float &lep1_d0();
	float &lep2_d0();
	float &lep1_dZ();
	float &lep2_dZ();
	float &lep1_d0_err();
	float &lep2_d0_err();
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &el_p4();
	vector<int> &el_id();
	vector<int> &el_idx();
	vector<float> &el_d0();
	vector<float> &el_dZ();
	vector<float> &el_d0_err();
	vector<int> &el_motherID();
	vector<int> &el_mc_id();
	vector<float> &el_iso();
	vector<bool> &el_passes_id();
	vector<bool> &el_FO();
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &mu_p4();
	vector<int> &mu_id();
	vector<int> &mu_idx();
	vector<float> &mu_d0();
	vector<float> &mu_dZ();
	vector<float> &mu_d0_err();
	vector<int> &mu_motherID();
	vector<int> &mu_mc_id();
	vector<float> &mu_iso();
	vector<bool> &mu_passes_id();
	vector<bool> &mu_FO();
}
#endif
