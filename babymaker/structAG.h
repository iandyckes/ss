#ifndef structAG_H
#define structAG_H

#include "Math/VectorUtil.h"  //needed for LorentzVectors
typedef ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > LorentzVector;
enum JetType { JETS_TYPE_PF_FAST_CORR_RESIDUAL, JETS_TYPE_PF_FAST_CORR, JETS_TYPE_PF_CORR, JETS_TYPE_PF_UNCORR };
struct hyp_t {int id1; LorentzVector p41; int id2; LorentzVector p42; int type; unsigned int idx1; unsigned int idx2; };
struct particle_t { int id; LorentzVector p4; int idx; };
struct btag_t { LorentzVector p4; float disc; };
enum CleaningType { JETS_CLEAN_NONE, JETS_CLEAN_HYP_E_MU, JETS_CLEAN_HYP_E,	JETS_CLEAN_SINGLE_E, JETS_CLEAN_SINGLE_MU, JETS_CLEAN_SS_E_MU };
enum BtagType { JETS_BTAG_NONE, JETS_BTAG_TCHEL, JETS_BTAG_TCHEM, JETS_BTAG_TCHPM, JETS_BTAG_TCHPT, JETS_BTAG_SSVHEM, JETS_BTAG_SSVHPT, JETS_BTAG_CSVL, JETS_BTAG_CSVM, JETS_BTAG_CSVT };

#endif
