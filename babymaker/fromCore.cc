#include "fromCore.h"
#include "CMS2.h"
#include "selections.h"

using namespace std;

float getJetMetSyst(int flag, float pt, float eta) {

  if (flag == 0) return 1.;
  if (flag > 1 || flag < -1) {
    std::cout << "Illegal call to getJetMetSyst" << std::endl;
    return 1.0;
  }

  float result;
  const int nBinsEta = 2 ;
  const int nBinsPt = 10 ;
  float uncert[nBinsEta][nBinsPt] =
    {
      { 12.0,  7.5,  6.3,  4.7,  3.7,  2.7,  2.6,  2.5,  2.4,  2.3  },
      { 20.0,  17.2, 14.5,  10.7,  7.9,  6.9,  6.0,  5.2,  4.7,  4.4  }
    };			
  int ipt = int(pt/10.);
  float rest = pt/10. - ipt;
  int ieta = 0;
  if (eta < -2.5 || eta > 2.5) {ieta = 1;}
  
  if (pt > 10. && pt < 100.) { 
    result = uncert[ieta][ipt-1] + rest*(uncert[ieta][ipt] - uncert[ieta][ipt-1]);
  } else if (pt >= 100.){
    result = uncert[ieta][9];
  } else {
    result = uncert[ieta][0];
  }		
  result = 1.0 + flag*result*0.01;
  return result;
}

bool makesExtraZ(int idx){

  std::vector<unsigned int> ele_idx;
  std::vector<unsigned int> mu_idx;

  int lt_id           = cms2.hyp_lt_id().at(idx);
  int ll_id           = cms2.hyp_ll_id().at(idx);
  unsigned int lt_idx = cms2.hyp_lt_index().at(idx);
  unsigned int ll_idx = cms2.hyp_ll_index().at(idx);

  (abs(lt_id) == 11) ? ele_idx.push_back(lt_idx) : mu_idx.push_back(lt_idx);
  (abs(ll_id) == 11) ? ele_idx.push_back(ll_idx) : mu_idx.push_back(ll_idx);

  if (ele_idx.size() + mu_idx.size() != 2) {
    std::cout << "ERROR: don't have 2 leptons in hypothesis!!!  Exiting" << std::endl;
    return false;
  }
      
  if (ele_idx.size() > 0) {
    for (unsigned int eidx = 0; eidx < cms2.els_p4().size(); eidx++) {

      bool is_hyp_lep = false;
      for (unsigned int vidx = 0; vidx < ele_idx.size(); vidx++) {
        if (eidx == ele_idx.at(vidx)) is_hyp_lep = true;                
      }
      if (is_hyp_lep) continue;
      if (fabs(cms2.els_p4().at(eidx).eta()) > 2.4) continue;
      if (cms2.els_p4().at(eidx).pt() < 10.) continue;

      if (!isGoodVetoElectron(eidx)) continue;

      for (unsigned int vidx = 0; vidx < ele_idx.size(); vidx++) {
        if (cms2.els_charge().at(eidx) * cms2.els_charge().at(ele_idx.at(vidx)) > 0) continue;
        LorentzVector zp4 = cms2.els_p4().at(eidx) + cms2.els_p4().at(ele_idx.at(vidx));
        float zcandmass = sqrt(fabs(zp4.mass2()));
        if (fabs(zcandmass-91.) < 15.) return true;
      }
    }
  }

  if (mu_idx.size() > 0) {
    for (unsigned int midx = 0; midx < cms2.mus_p4().size(); midx++) {

      bool is_hyp_lep = false;
      for (unsigned int vidx = 0; vidx < mu_idx.size(); vidx++) {
        if (midx == mu_idx.at(vidx)) is_hyp_lep = true;                
      }
      if (is_hyp_lep) continue;
      if (fabs(cms2.mus_p4().at(midx).eta()) > 2.4) continue;
      if (cms2.mus_p4().at(midx).pt() < 10.) continue;

      if (!isGoodVetoMuon(midx)) continue;

      for (unsigned int vidx = 0; vidx < mu_idx.size(); vidx++) {
        if (cms2.mus_charge().at(midx) * cms2.mus_charge().at(mu_idx.at(vidx)) > 0) continue;
        LorentzVector zp4 = cms2.mus_p4().at(midx) + cms2.mus_p4().at(mu_idx.at(vidx));
        float zcandmass = sqrt(fabs(zp4.mass2()));
        if (fabs(zcandmass-91.) < 15.) return true;
      }
    }
  }

  return false;
}

bool passUnprescaledHLTTrigger(const char* arg){

  // put the trigger name into a string
  TString HLTTrigger( arg );

  // Did the trigger pass?
  if ( !(cms2.passHLTTrigger(HLTTrigger)) ) return false;

  // The trigger passed, check the pre-scale
  int trigIndx = -1;
  vector<TString>::const_iterator begin_it = cms2.hlt_trigNames().begin();
  vector<TString>::const_iterator end_it   = cms2.hlt_trigNames().end();
  vector<TString>::const_iterator found_it = find(begin_it, end_it, HLTTrigger );
  if( (found_it != end_it) ){
    trigIndx = found_it - begin_it;
  }
  else {
    cout << "passUnprescaledTrigger: Cannot find Trigger " << arg << endl;
    return false;
  }

  if( strcmp( arg , cms2.hlt_trigNames().at(trigIndx) ) != 0 ){
    cout << "Error! trig names don't match" << endl;
    cout << "Found trig name " << cms2.hlt_trigNames().at(trigIndx) << endl;
    cout << "Prescale        " << cms2.hlt_prescales().at(trigIndx) << endl;
    exit(0);
  }

  if( cms2.hlt_prescales().at(trigIndx) == 1 ) return true;

  return false;

}

bool passUnprescaledHLTTriggerPattern(const char* arg){
  TString HLTTriggerPattern(arg);
  TString HLTTrigger = triggerName( HLTTriggerPattern );
  if( HLTTrigger.Contains("TRIGGER_NOT_FOUND")) return false;
  return passUnprescaledHLTTrigger( HLTTrigger );
}


bool makesExtraGammaStar(int idx){

    std::vector<unsigned int> ele_idx;
    std::vector<unsigned int> mu_idx;

    int lt_id           = cms2.hyp_lt_id().at(idx);
    int ll_id           = cms2.hyp_ll_id().at(idx);
    unsigned int lt_idx = cms2.hyp_lt_index().at(idx);
    unsigned int ll_idx = cms2.hyp_ll_index().at(idx);

    (abs(lt_id) == 11) ? ele_idx.push_back(lt_idx) : mu_idx.push_back(lt_idx);
    (abs(ll_id) == 11) ? ele_idx.push_back(ll_idx) : mu_idx.push_back(ll_idx);

    if (ele_idx.size() + mu_idx.size() != 2) {
        std::cout << "ERROR: don't have 2 leptons in hypothesis!!!  Exiting" << std::endl;
        return false;
    }
        
    if (ele_idx.size() > 0) {
        for (unsigned int eidx = 0; eidx < cms2.els_p4().size(); eidx++) {

            bool is_hyp_lep = false;
            for (unsigned int vidx = 0; vidx < ele_idx.size(); vidx++) {
                if (eidx == ele_idx.at(vidx)) is_hyp_lep = true;
            }
            if (is_hyp_lep) continue;

            if (fabs(cms2.els_p4().at(eidx).eta()) > 2.4) continue;
            if (cms2.els_p4().at(eidx).pt() < 7.0) continue;
            if (!isGoodVetoElectron(eidx)) continue;

            for (unsigned int vidx = 0; vidx < ele_idx.size(); vidx++) {
                if (cms2.els_charge().at(eidx) * cms2.els_charge().at(ele_idx.at(vidx)) > 0) continue;
                LorentzVector gamma_p4 = cms2.els_p4().at(eidx) + cms2.els_p4().at(ele_idx.at(vidx));
                float gammacandmass = sqrt(fabs(gamma_p4.mass2()));
                if (gammacandmass < 12.0) return true;
            }
        } 
    }

    if (mu_idx.size() > 0) {
        for (unsigned int midx = 0; midx < cms2.mus_p4().size(); midx++) {
            bool is_hyp_lep = false;
            for (unsigned int vidx = 0; vidx < mu_idx.size(); vidx++) {
              if (midx == mu_idx.at(vidx)) is_hyp_lep = true; 
            }

            if (is_hyp_lep) continue;
            if (fabs(cms2.mus_p4().at(midx).eta()) > 2.4) continue;
            if (cms2.mus_p4().at(midx).pt() < 5.0) continue;

            if (!isGoodVetoMuon(midx)) continue;

            for (unsigned int vidx = 0; vidx < mu_idx.size(); vidx++) {
                if (cms2.mus_charge().at(midx) * cms2.mus_charge().at(mu_idx.at(vidx)) > 0) continue;
                LorentzVector gamma_p4 = cms2.mus_p4().at(midx) + cms2.mus_p4().at(mu_idx.at(vidx));
                float gammacandmass = sqrt(fabs(gamma_p4.mass2()));
                if (gammacandmass < 12.0) return true;
            }
        }
    }

    return false;
}

bool passesPFJetID(unsigned int pfJetIdx) {

    float pfjet_chf_  = cms2.pfjets_chargedHadronE()[pfJetIdx] / cms2.pfjets_p4()[pfJetIdx].energy();
    float pfjet_nhf_  = cms2.pfjets_neutralHadronE()[pfJetIdx] / cms2.pfjets_p4()[pfJetIdx].energy();
    float pfjet_cef_  = cms2.pfjets_chargedEmE()[pfJetIdx] / cms2.pfjets_p4()[pfJetIdx].energy();
    float pfjet_nef_  = cms2.pfjets_neutralEmE()[pfJetIdx] / cms2.pfjets_p4()[pfJetIdx].energy();
    int   pfjet_cm_   = cms2.pfjets_chargedMultiplicity()[pfJetIdx];
    int   pfjet_mult_ = pfjet_cm_ + cms2.pfjets_neutralMultiplicity()[pfJetIdx];

    if (pfjet_nef_ >= 0.99)
        return false;
    if (pfjet_nhf_ >= 0.99)
        return false;
    if (pfjet_mult_ < 2)
        return false;

    if (fabs(cms2.pfjets_p4()[pfJetIdx].eta()) < 2.4)
    {   
        if (pfjet_chf_ < 1e-6)
            return false;
        if (pfjet_cm_ < 1)
            return false;
        if (pfjet_cef_ >= 0.99)
            return false;
    }   

    return true;
}  

bool passesTriggerVeryLowPt(int hyp_type){
  if (!cms2.evt_isRealData()) return true; 

  if (hyp_type == 0) {
      if (passUnprescaledHLTTriggerPattern("HLT_DoubleRelIso1p0Mu5_Mass8_PFNoPUHT175_v")) {return true;}
      if (passUnprescaledHLTTriggerPattern("HLT_DoubleRelIso1p0Mu5_Mass8_PFHT175_v"    )) {return true;}
  }

  else if ((hyp_type == 1 || hyp_type == 2)) {
      if (passUnprescaledHLTTriggerPattern("HLT_RelIso1p0Mu5_Ele8_CaloIdT_TrkIdVL_Mass8_PFNoPUHT175_v")) {return true;}
      if (passUnprescaledHLTTriggerPattern("HLT_RelIso1p0Mu5_Ele8_CaloIdT_TrkIdVL_Mass8_PFHT175_v"    )) {return true;}
  }

  else if (hyp_type == 3) {
      if (passUnprescaledHLTTriggerPattern("HLT_DoubleEle8_CaloIdT_TrkIdVL_Mass8_PFNoPUHT175_v")) {return true;}
      if (passUnprescaledHLTTriggerPattern("HLT_DoubleEle8_CaloIdT_TrkIdVL_Mass8_PFHT175_v"    )) {return true;}
  }

  return false;
}

TString triggerName(TString triggerPattern){

  bool    foundTrigger  = false;
  TString exact_hltname = "";

  for( unsigned int itrig = 0 ; itrig < cms2.hlt_trigNames().size() ; ++itrig ){
    if( TString( cms2.hlt_trigNames().at(itrig) ).Contains( triggerPattern ) ){
      foundTrigger  = true;
      exact_hltname = cms2.hlt_trigNames().at(itrig);
      break;
    }
  }

  if( !foundTrigger) return "TRIGGER_NOT_FOUND";

  return exact_hltname;

}

bool hypsFromFirstGoodVertex(size_t hypIdx, float dz_cut){

    int lt_idx = cms2.hyp_lt_index()[hypIdx];
    int ll_idx = cms2.hyp_ll_index()[hypIdx];

    int lt_id = cms2.hyp_lt_id()[hypIdx];
    int ll_id = cms2.hyp_ll_id()[hypIdx];

    float lt_dz = abs(lt_id) == 11 ? tas::els_dzPV().at(lt_idx) : tas::mus_dzPV().at(lt_idx);
    float ll_dz = abs(ll_id) == 11 ? tas::els_dzPV().at(ll_idx) : tas::mus_dzPV().at(ll_idx);

    if (fabs(lt_dz) < dz_cut && fabs(ll_dz) < dz_cut) return true;    
    return false;
}

bool isIsolatedLepton(int id, int idx){
    if (abs(id) == 11) return eleRelIso03(idx) < 0.18;
    if (abs(id) == 13) return muRelIso03(idx) < 0.15;
    return false;
}

bool isGoodLepton(int id, int idx){
  if (abs(id) == 11) return isGoodElectron(idx);
  else if (abs(id) == 13) return isGoodMuon(idx);
  return false;
}

bool isDenominatorLepton(int id, int idx){
  if (abs(id) == 11) return isFakableElectron(idx);
  else if (abs(id) == 13) return isFakableMuon(idx);
  else return false;
}

int leptonIsFromW(int idx, int id, bool alsoSusy){

  int st1_id = 0;
  int st3_id = 0;
  int st1_motherid = 0;
  if (abs(id) == 11) {
    st1_id = cms2.els_mc_id()[idx];
    st3_id = cms2.els_mc3_id()[idx];
    st1_motherid = cms2.els_mc_motherid()[idx];
    //a true lepton from a W will have it's motherid==24
    //if the lepton comes from a tau decay that comes from a W, 
    //we have to do some work to trace the parentage
    //to do this, we have to go to the status==3 block because 
    //the daughter info is not in status==1
    if(abs(st1_motherid)==15) {
      bool foundelectronneutrino = false; //ensures that the matched electron from a tau really came from a W
      for(unsigned int i = 0; i < cms2.genps_id().size(); i++) {//status 3 loop
	if(abs(cms2.genps_id()[i]) == 15 ) { //make sure we get the right tau!
	  cms2.genps_lepdaughter_id()[i].size(); 
	  for(unsigned int j = 0; j < cms2.genps_lepdaughter_id()[i].size(); j++) { //loop over the tau's status1 daughters
	    if(abs(cms2.genps_lepdaughter_id()[i][j]) == 12)
	      foundelectronneutrino = true;
	    float dr = ROOT::Math::VectorUtil::DeltaR(cms2.els_mc_p4()[idx], cms2.genps_lepdaughter_p4()[i][j]);
	    if (dr < 0.0001) { //should be the same exact status==1 gen particle!
	      st1_motherid = cms2.genps_id_mother()[i];
	      continue;
	    }//if (dr < 0.0001)
	  }//loop over the tau's daughters
	  if(!foundelectronneutrino)
	    st1_motherid = -9999;
	}//tau
      }//status 3 loop
    }
  } else if (abs(id) == 13) {
    st1_id = cms2.mus_mc_id()[idx];
    st3_id = cms2.mus_mc3_id()[idx];
    st1_motherid = cms2.mus_mc_motherid()[idx];
    //a true lepton from a W will have it's motherid==24
    //if the lepton comes from a tau decay that comes from a W, 
    //we have to do some work to trace the parentage
    //to do this, we have to go to the status==3 block because 
    //the daughter info is not in status==1
    if(abs(st1_motherid)==15) {
      bool foundmuonneutrino = false;
      for(unsigned int i = 0; i < cms2.genps_id().size(); i++) {//status 3 loop
	if(abs(cms2.genps_id()[i]) == 15 ) { //make sure we get the right tau!
	  cms2.genps_lepdaughter_id()[i].size();
	  for(unsigned int j = 0; j < cms2.genps_lepdaughter_id()[i].size(); j++) {//loop over the tau's status1 daughters
	    if(abs(cms2.genps_lepdaughter_id()[i][j]) == 14)
	      foundmuonneutrino = true;
	    float dr = ROOT::Math::VectorUtil::DeltaR(cms2.mus_mc_p4()[idx], cms2.genps_lepdaughter_p4()[i][j]);
	    if (dr < 0.0001) { //should be the same exact status==1 gen particle!
 	      st1_motherid = cms2.genps_id_mother()[i];
	      continue;
	    }//if (dr < 0.0001)
	  }//loop over the tau's daughters
	  if(!foundmuonneutrino)
	    st1_motherid = -9999;
	}//tau
      }//status 3 loop
    }
  } else {
    std::cout << "You fool.  Give me +/- 11 or +/- 13 please" << std::endl;
    return false;
  }


  // debug
  // std::cout << "id=" << id << " st1_id=" << st1_id;
  // std::cout << " st3_id=" << st3_id;
  // std::cout << " st1_motherid=" << st1_motherid << std::endl;

  // Step 1
  // Look at status 1 match, it should be either a lepton or
  // a photon if it comes from W/Z.
  // The photon case takes care of collinear FSR
  if ( !(abs(st1_id) == abs(id) || st1_id == 22)) return 0;

  // Step 2
  // If the status 1 match is a photon, its mother must be
  // a lepton.  Otherwise it is not FSR
  if (st1_id == 22) {
    if (abs(st1_motherid) != abs(id)) return 0;
  }

  // At this point we are matched (perhaps via FSR) to
  // a status 1 lepton.  This means that we are left with
  // leptons from W, taus, bottom, charm, as well as dalitz decays

  // Step 3
  // A no-brainer: pick up vanilla W->lepton decays
  // (should probably add Higgs, SUSY, W' etc...not for now)
  if (st1_id ==  id && abs(st1_motherid) == 24) return 1; // W
  if (st1_id == -id && abs(st1_motherid) == 24) return 2; // W
  if (st1_id ==  id &&   st1_motherid    == 23) return 1; // Z
  if (st1_id == -id &&   st1_motherid    == 23) return 2; // Z
  if ( alsoSusy ) {
    if (st1_id ==  id && abs(st1_motherid) > 1e6) return 1; // exotica
    if (st1_id == -id && abs(st1_motherid) > 1e6) return 2; // exotica
  }

  // Step 4
  // Another no-brainer: pick up leptons matched to status=3
  // leptons.  This should take care of collinear FSR
  // This also picks up a bunch of SUSY decays
  if (st3_id ==  id) return 1;
  if (st3_id == -id) return 2;
 
  // Step 5
  // Now we need to go after the W->tau->lepton.  
  // We exploit the fact that in t->W->tau the tau shows up
  // at status=3.  We also use the fact that the tau decay products
  // are highly boosted, so the direction of the status=3 tau and
  // the lepton from tau decays are about the same
  //
  // We do not use the status=1 links because there is not
  // enough information to distinguish
  // W->tau->lepton  or W->tau->lepton gamma
  //  from
  // B->tau->lepton or B->tau->lepton gamma
  //if (abs(st3_id) == 15 && id*st3_id > 0) return 1;
  //if (abs(st3_id) == 15 && id*st3_id < 0) return 2;
  if(abs(st3_id) == 15) {
    //have to find the index of the status3 particle by dR
    //because the indices are buggy
    unsigned int mc3idx = 999999;
    LorentzVector lepp4 =  abs(id)==11 ? cms2.els_p4()[idx] : cms2.mus_p4()[idx];
    double mindR = 9999;
    for(unsigned int i = 0; i < cms2.genps_id().size(); i++) {
      float dr = ROOT::Math::VectorUtil::DeltaR(lepp4, cms2.genps_p4()[i]);
      if(dr < mindR) {
	mindR = dr;
	mc3idx = i;
      }
    }
    bool foundElOrMuNu = false;    
    for(unsigned int i = 0; i < cms2.genps_lepdaughter_p4()[mc3idx].size(); i++) {
      if(abs(cms2.genps_lepdaughter_id()[mc3idx][i]) == 12 || abs(cms2.genps_lepdaughter_id()[mc3idx][i]) == 14)
	foundElOrMuNu = true;
    }
    if(!foundElOrMuNu) //comes from a hadronic decay of the tau
      return -3;
    if(id*st3_id > 0) 
      return 1;
    else return 2;
  }
  
  
  // Step 6
  // If we get here, we have a non-W lepton
  // Now we figure out if it is from b, c, or "other"
  // There are a couple of caveats
  // (a) b/c --> lepton --> lepton gamma (ie FSR) is labelled as "other"
  // (b) b   --> tau --> lepton is labelled as "other"
  if ( abs(st1_id) == abs(id) && idIsBeauty(st1_motherid)) return -1;
  if ( abs(st1_id) == abs(id) && idIsCharm(st1_motherid))  return -2;
  return -3;
}


