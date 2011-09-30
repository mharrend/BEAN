#ifndef ProductArea_BNmuon_h
#define ProductArea_BNmuon_h

#include <vector>


// a simple class
struct BNmuon
{
  explicit BNmuon(double v, int c):energy(v),et(v),pt(v),px(v),py(v),pz(v),phi(v),eta(v),theta(v),trackIso(v),ecalIso(v),hcalIso(v),caloIso(v),trackIsoDR03(v),ecalIsoDR03(v),hcalIsoDR03(v),caloIsoDR03(v),trackVetoIsoDR03(v),ecalVetoIsoDR03(v),hcalVetoIsoDR03(v),caloVetoIsoDR03(v),trackIsoDR05(v),ecalIsoDR05(v),hcalIsoDR05(v),caloIsoDR05(v),trackVetoIsoDR05(v),ecalVetoIsoDR05(v),hcalVetoIsoDR05(v),caloVetoIsoDR05(v),hcalE(v),ecalE(v),genET(v),genPT(v),genPhi(v),genEta(v),genMotherET(v),genMotherPT(v),genMotherPhi(v),genMotherEta(v),vx(v),vy(v),vz(v),tkNormChi2(v),tkPT(v),tkEta(v),tkPhi(v),tkDZ(v),tkD0(v),tkD0bs(v),tkD0err(v),samNormChi2(v),samPT(v),samEta(v),samPhi(v),samDZ(v),samD0(v),samD0bs(v),samD0err(v),comNormChi2(v),comPT(v),comEta(v),comPhi(v),comDZ(v),comD0(v),comD0bs(v),comD0err(v),charge(c),IDGMPTight(c),tkNumValidHits(c),tkCharge(c),samNumValidHits(c),samCharge(c),comNumValidHits(c),comCharge(c),genId(c),genCharge(c),genMotherId(c),genMotherCharge(c) { }
  BNmuon():energy(-99),et(-99),pt(-99),px(-99),py(-99),pz(-99),phi(-99),eta(-99),theta(-99),trackIso(-99),ecalIso(-99),hcalIso(-99),caloIso(-99),trackIsoDR03(-99),ecalIsoDR03(-99),hcalIsoDR03(-99),caloIsoDR03(-99),trackVetoIsoDR03(-99),ecalVetoIsoDR03(-99),hcalVetoIsoDR03(-99),caloVetoIsoDR03(-99),trackIsoDR05(-99),ecalIsoDR05(-99),hcalIsoDR05(-99),caloIsoDR05(-99),trackVetoIsoDR05(-99),ecalVetoIsoDR05(-99),hcalVetoIsoDR05(-99),caloVetoIsoDR05(-99),hcalE(-99),ecalE(-99),genET(-99),genPT(-99),genPhi(-99),genEta(-99),genMotherET(-99),genMotherPT(-99),genMotherPhi(-99),genMotherEta(-99),vx(-99),vy(-99),vz(-99),tkNormChi2(-99),tkPT(-99),tkEta(-99),tkPhi(-99),tkDZ(-99),tkD0(-99),tkD0bs(-99),tkD0err(-99),samNormChi2(-99),samPT(-99),samEta(-99),samPhi(-99),samDZ(-99),samD0(-99),samD0bs(-99),samD0err(-99),comNormChi2(-99),comPT(-99),comEta(-99),comPhi(-99),comDZ(-99),comD0(-99),comD0bs(-99),comD0err(-99),charge(-99),IDGMPTight(-99),tkNumValidHits(-99),tkCharge(-99),samNumValidHits(-99),samCharge(-99),comNumValidHits(-99),comCharge(-99),genId(-99),genCharge(-99),genMotherId(-99),genMotherCharge(-99) { }
  double energy,et,pt,px,py,pz,phi,eta,theta,trackIso,ecalIso,hcalIso,caloIso,trackIsoDR03,ecalIsoDR03,hcalIsoDR03,caloIsoDR03,trackVetoIsoDR03,ecalVetoIsoDR03,hcalVetoIsoDR03,caloVetoIsoDR03,trackIsoDR05,ecalIsoDR05,hcalIsoDR05,caloIsoDR05,trackVetoIsoDR05,ecalVetoIsoDR05,hcalVetoIsoDR05,caloVetoIsoDR05,hcalE,ecalE,genET,genPT,genPhi,genEta,genMotherET,genMotherPT,genMotherPhi,genMotherEta,vx,vy,vz,tkNormChi2,tkPT,tkEta,tkPhi,tkDZ,tkD0,tkD0bs,tkD0err,samNormChi2,samPT,samEta,samPhi,samDZ,samD0,samD0bs,samD0err,comNormChi2,comPT,comEta,comPhi,comDZ,comD0,comD0bs,comD0err,isolationR03emVetoEt,isolationR03hadVetoEt;
  int    charge,IDGMPTight,tkNumValidHits,tkCharge,samNumValidHits,samCharge,comNumValidHits,comCharge,genId,genCharge,genMotherId,genMotherCharge;
};

// this is our new product, it is simply a 
// collection of BNmuon held in an std::vector
typedef std::vector<BNmuon> BNmuonCollection;

#endif
