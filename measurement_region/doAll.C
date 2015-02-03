{

  gROOT->ProcessLine(".L ScanChain.C+");

  TChain *qcd = new TChain("t"); 
  //qcd->Add("/home/users/iandyckes/CMSSW_5_3_18/ss/ss2015/babymaker/qcd1.root");
  //qcd->Add("/home/users/iandyckes/CMSSW_5_3_18/ss/ss2015/babymaker/qcd1_big.root");
  qcd->Add("/home/users/iandyckes/CMSSW_5_3_18/ss/ss2015/babymaker/qcd1_20to120_MuEnriched.root");

  TChain *ttbar = new TChain("t"); 
  ttbar->Add("/home/users/iandyckes/CMSSW_5_3_18/ss/ss2015/babymaker/ttbar1.root");
  
  ScanChain(qcd); 
  //ScanChain(ttbar); 
}
