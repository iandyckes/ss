#include "lepfilter.h"
lepfilter ss;
namespace samesign {
	float &met() { return ss.met(); }
	float &metPhi() { return ss.metPhi(); }
	int &event() { return ss.event(); }
	int &lumi() { return ss.lumi(); }
	int &run() { return ss.run(); }
	bool &filt_csc() { return ss.filt_csc(); }
	bool &filt_hbhe() { return ss.filt_hbhe(); }
	bool &filt_hcallaser() { return ss.filt_hcallaser(); }
	bool &filt_ecaltp() { return ss.filt_ecaltp(); }
	bool &filt_trkfail() { return ss.filt_trkfail(); }
	bool &filt_eebadsc() { return ss.filt_eebadsc(); }
	bool &is_real_data() { return ss.is_real_data(); }
	float &scale1fb() { return ss.scale1fb(); }
	float &xsec() { return ss.xsec(); }
	float &kfactor() { return ss.kfactor(); }
	float &gen_met() { return ss.gen_met(); }
	float &gen_met_phi() { return ss.gen_met_phi(); }
	float &njets() { return ss.njets(); }
	int &best_hyp() { return ss.best_hyp(); }
	int &hyp_class() { return ss.hyp_class(); }
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &lep1_p4() { return ss.lep1_p4(); }
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &lep2_p4() { return ss.lep2_p4(); }
	float &ht() { return ss.ht(); }
	int &nbtags_uncorr() { return ss.nbtags_uncorr(); }
	int &lep1_motherID() { return ss.lep1_motherID(); }
	int &lep2_motherID() { return ss.lep2_motherID(); }
	int &lep1_mc_id() { return ss.lep1_mc_id(); }
	int &lep2_mc_id() { return ss.lep2_mc_id(); }
	int &lep1_id() { return ss.lep1_id(); }
	int &lep2_id() { return ss.lep2_id(); }
	int &lep1_idx() { return ss.lep1_idx(); }
	int &lep2_idx() { return ss.lep2_idx(); }
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &jets() { return ss.jets(); }
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &btags_p4_uncorr() { return ss.btags_p4_uncorr(); }
	vector<float> &btags_disc_uncorr() { return ss.btags_disc_uncorr(); }
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &btags() { return ss.btags(); }
	int &nbtags() { return ss.nbtags(); }
	float &sf_dilepTrig_hpt() { return ss.sf_dilepTrig_hpt(); }
	float &sf_dilepTrig_lpt() { return ss.sf_dilepTrig_lpt(); }
	float &sf_dilepTrig_vlpt() { return ss.sf_dilepTrig_vlpt(); }
	int &hyp_type() { return ss.hyp_type(); }
	float &sf_dilep_eff() { return ss.sf_dilep_eff(); }
	float &mt() { return ss.mt(); }
	float &mt_l2() { return ss.mt_l2(); }
	float &mt2() { return ss.mt2(); }
	float &mGluino() { return ss.mGluino(); }
	float &mLSP() { return ss.mLSP(); }
	float &mSbottom() { return ss.mSbottom(); }
	float &mChargino() { return ss.mChargino(); }
	int &lep1_id_gen() { return ss.lep1_id_gen(); }
	int &lep2_id_gen() { return ss.lep2_id_gen(); }
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &lep1_p4_gen() { return ss.lep1_p4_gen(); }
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &lep2_p4_gen() { return ss.lep2_p4_gen(); }
	int &lep3_id() { return ss.lep3_id(); }
	int &lep3_idx() { return ss.lep3_idx(); }
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &lep3_p4() { return ss.lep3_p4(); }
	float &lep1_iso() { return ss.lep1_iso(); }
	float &lep2_iso() { return ss.lep2_iso(); }
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &dilep_p4() { return ss.dilep_p4(); }
	TString &sample() { return ss.sample(); }
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &genps_p4() { return ss.genps_p4(); }
	vector<int> &genps_id() { return ss.genps_id(); }
	vector<int> &genps_id_mother() { return ss.genps_id_mother(); }
	vector<int> &genps_status() { return ss.genps_status(); }
	vector<int> &genps_id_grandma() { return ss.genps_id_grandma(); }
	bool &lep1_passes_id() { return ss.lep1_passes_id(); }
	bool &lep2_passes_id() { return ss.lep2_passes_id(); }
	float &lep1_d0() { return ss.lep1_d0(); }
	float &lep2_d0() { return ss.lep2_d0(); }
	float &lep1_dZ() { return ss.lep1_dZ(); }
	float &lep2_dZ() { return ss.lep2_dZ(); }
	float &lep1_d0_err() { return ss.lep1_d0_err(); }
	float &lep2_d0_err() { return ss.lep2_d0_err(); }
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &el_p4() { return ss.el_p4(); }
	vector<int> &el_id() { return ss.el_id(); }
	vector<int> &el_idx() { return ss.el_idx(); }
	vector<float> &el_d0() { return ss.el_d0(); }
	vector<float> &el_dZ() { return ss.el_dZ(); }
	vector<float> &el_d0_err() { return ss.el_d0_err(); }
	vector<int> &el_motherID() { return ss.el_motherID(); }
	vector<int> &el_mc_id() { return ss.el_mc_id(); }
	vector<float> &el_iso() { return ss.el_iso(); }
	vector<bool> &el_passes_id() { return ss.el_passes_id(); }
	vector<bool> &el_FO() { return ss.el_FO(); }
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &mu_p4() { return ss.mu_p4(); }
	vector<int> &mu_id() { return ss.mu_id(); }
	vector<int> &mu_idx() { return ss.mu_idx(); }
	vector<float> &mu_d0() { return ss.mu_d0(); }
	vector<float> &mu_dZ() { return ss.mu_dZ(); }
	vector<float> &mu_d0_err() { return ss.mu_d0_err(); }
	vector<int> &mu_motherID() { return ss.mu_motherID(); }
	vector<int> &mu_mc_id() { return ss.mu_mc_id(); }
	vector<float> &mu_iso() { return ss.mu_iso(); }
	vector<bool> &mu_passes_id() { return ss.mu_passes_id(); }
	vector<bool> &mu_FO() { return ss.mu_FO(); }
}
