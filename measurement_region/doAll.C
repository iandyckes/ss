{

  //  TString tag = "V00-00-00";
  string tag = "V00-00-00";

  gROOT->ProcessLine(".L ScanChain.C+");

  TChain *qcd = new TChain("t"); 
  //  qcd->Add( Form("../output/%s/qcd1.root",tag.c_str()) );
  qcd->Add( Form("../fake_rate_output/%s/qcd1.root",tag.c_str()) );

  // TChain *ttbar = new TChain("t"); 
  // ttbar->Add("/home/users/iandyckes/CMSSW_5_3_18/ss/ss2015/babymaker/ttbar1.root");
  
  ScanChain(qcd); 
  //ScanChain(ttbar); 
}
