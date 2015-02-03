#include "structAG.h"
#include "CMS2.h"

typedef vector<pair<const LorentzVector *, double> > jets_with_corr_t;

static const float BtagWP[] = {-999999., 1.7, 3.3, 1.93, 3.41, 1.74, 2.00, 0.244, 0.679, 0.898};

struct jets_pt_gt {
    bool operator () (const LorentzVector &v1, const LorentzVector &v2) 
    {   
        return v1.pt() > v2.pt();
    }   
};

struct SortByPt_btag {
  bool operator() (const btag_t &v1, const btag_t &v2){ return v1.p4.pt() > v2.p4.pt(); }
};

struct SortByPt 
{
    bool operator () (const LorentzVector& lhs, const LorentzVector& rhs) 
    {
        return lhs.pt() > rhs.pt();
    }

    bool operator () (const std::pair<LorentzVector, unsigned int>& lhs, const std::pair<LorentzVector, unsigned int>& rhs) 
    {
        return lhs.first.pt() > rhs.first.pt();
    }

    bool operator () (const std::pair<LorentzVector, int>& lhs, const std::pair<LorentzVector, int>& rhs) 
    {
        return lhs.first.pt() > rhs.first.pt();
    }

    bool operator () (const std::pair<LorentzVector, bool>& lhs, const std::pair<LorentzVector, bool>& rhs) 
    {
        return lhs.first.pt() > rhs.first.pt();
    }

    bool operator () (const std::pair<LorentzVector, float>& lhs, const std::pair<LorentzVector, float>& rhs) 
    {
        return lhs.first.pt() > rhs.first.pt();
    }

    bool operator () (const std::pair<int, int>& lhs, const std::pair<int, int>& rhs){
        const LorentzVector& lhs_p4 = (abs(lhs.first)==11 ? tas::els_p4().at(lhs.second) : tas::mus_p4().at(lhs.second));
        const LorentzVector& rhs_p4 = (abs(rhs.first)==11 ? tas::els_p4().at(rhs.second) : tas::mus_p4().at(rhs.second));
        return lhs_p4.pt() > rhs_p4.pt();
    }
};

float getJetMetSyst(int flag, float pt, float eta);
bool makesExtraZ(int idx);
bool passUnprescaledHLTTrigger(const char* arg);
bool passUnprescaledHLTTriggerPattern(const char* arg);
bool makesExtraGammaStar(int idx);
bool passesTriggerVeryLowPt(int hyp_type);
TString triggerName(TString triggerPattern);
bool hypsFromFirstGoodVertex(size_t hypIdx, float dz_cut = 1.0);
bool passesPFJetID(unsigned int pfJetIdx); 
bool isIsolatedLepton(int id, int idx);
bool isGoodLepton(int id, int idx);
bool isDenominatorLepton(int id, int idx);
