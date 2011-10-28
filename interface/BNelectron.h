#ifndef ProductArea_BNelectron_h
#define ProductArea_BNelectron_h

#include <vector>


// a simple class
struct BNelectron
{
  explicit BNelectron(double v, int c):energy(v),et(v),gsfEt(v),pt(v),px(v),py(v),pz(v),phi(v),eta(v),theta(v),EscOverPin(v),EseedOverPout(v),hadOverEm(v),trackIso(v),ecalIso(v),hcalIso(v),caloIso(v),trackIsoDR03(v),ecalIsoDR03(v),hcalIsoDR03(v),hcalIsoDR03depth1(v),hcalIsoDR03depth2(v),caloIsoDR03(v),trackIsoDR04(v),ecalIsoDR04(v),hcalIsoDR04(v),hcalIsoDR04depth1(v),hcalIsoDR04depth2(v),caloIsoDR04(v),fbrem(v),delPhiIn(v),delEtaIn(v),genET(v),genPT(v),genPhi(v),genEta(v),genMotherET(v),genMotherPT(v),genMotherPhi(v),genMotherEta(v),vx(v),vy(v),vz(v),scEnergy(v),scRawEnergy(v),scSigmaEtaEta(v),scSigmaIEtaIEta(v),scE1x5(v),scE2x5Max(v),scE5x5(v),scEt(v),scEta(v),scPhi(v),scZ(v),tkNormChi2(v),tkPT(v),tkEta(v),tkPhi(v),tkDZ(v),tkD0(v),tkD0bs(v),tkD0err(v),mva(v),dist(v),dcot(v),convradius(v),convPointX(v),convPointY(v),convPointZ(v),eMax(v),eLeft(v),eRight(v),eTop(v),eBottom(v),e3x3(v),swissCross(v),seedEnergy(v),seedTime(v),swissCrossNoI85(v),swissCrossI85(v),E2overE9NoI85(v),E2overE9I85(v),correctedD0(v),correctedDZ(v),particleIso(v),chargedHadronIso(v),neutralHadronIso(v),photonIso(v),puChargedHadronIso(v),charge(c),classification(c),genId(c),genCharge(c),genMotherId(c),genMotherCharge(c),numClusters(c),tkNumValidHits(c),tkCharge(c),gsfCharge(c),isEB(c),isEE(c),isGap(c),isEBEEGap(c),isEBGap(c),isEEGap(c),isEcalDriven(c),isTrackerDriven(c),numberOfLostHits(c),numberOfExpectedInnerHits(c),numberOfValidPixelHits(c),numberOfValidPixelBarrelHits(c),numberOfValidPixelEndcapHits(c),isHEEP(c),isHEEPnoEt(c),seedRecoFlag(c),eidRobustHighEnergy(c),eidRobustLoose(c),eidRobustTight(c),eidLoose(c),eidTight(c) { }
  BNelectron():energy(-99),et(-99),gsfEt(-99),pt(-99),px(-99),py(-99),pz(-99),phi(-99),eta(-99),theta(-99),EscOverPin(-99),EseedOverPout(-99),hadOverEm(-99),trackIso(-99),ecalIso(-99),hcalIso(-99),caloIso(-99),trackIsoDR03(-99),ecalIsoDR03(-99),hcalIsoDR03(-99),hcalIsoDR03depth1(-99),hcalIsoDR03depth2(-99),caloIsoDR03(-99),trackIsoDR04(-99),ecalIsoDR04(-99),hcalIsoDR04(-99),hcalIsoDR04depth1(-99),hcalIsoDR04depth2(-99),caloIsoDR04(-99),fbrem(-99),delPhiIn(-99),delEtaIn(-99),genET(-99),genPT(-99),genPhi(-99),genEta(-99),genMotherET(-99),genMotherPT(-99),genMotherPhi(-99),genMotherEta(-99),vx(-99),vy(-99),vz(-99),scEnergy(-99),scRawEnergy(-99),scSigmaEtaEta(-99),scSigmaIEtaIEta(-99),scE1x5(-99),scE2x5Max(-99),scE5x5(-99),scEt(-99),scEta(-99),scPhi(-99),scZ(-99),tkNormChi2(-99),tkPT(-99),tkEta(-99),tkPhi(-99),tkDZ(-99),tkD0(-99),tkD0bs(-99),tkD0err(-99),mva(-99),dist(-99),dcot(-99),convradius(-99),convPointX(-99),convPointY(-99),convPointZ(-99),eMax(-99),eLeft(-99),eRight(-99),eTop(-99),eBottom(-99),e3x3(-99),swissCross(-99),seedEnergy(-99),seedTime(-99),swissCrossNoI85(-99),swissCrossI85(-99),E2overE9NoI85(-99),E2overE9I85(-99),correctedD0(-99),correctedDZ(-99),particleIso(-99),chargedHadronIso(-99),neutralHadronIso(-99),photonIso(-99),puChargedHadronIso(-99),charge(-99),classification(-99),genId(-99),genCharge(-99),genMotherId(-99),genMotherCharge(-99),numClusters(-99),tkNumValidHits(-99),tkCharge(-99),gsfCharge(-99),isEB(-99),isEE(-99),isGap(-99),isEBEEGap(-99),isEBGap(-99),isEEGap(-99),isEcalDriven(-99),isTrackerDriven(-99),numberOfLostHits(-99),numberOfExpectedInnerHits(-99),numberOfValidPixelHits(-99),numberOfValidPixelBarrelHits(-99),numberOfValidPixelEndcapHits(-99),isHEEP(-99),isHEEPnoEt(-99),seedRecoFlag(-99),eidRobustHighEnergy(-99),eidRobustLoose(-99),eidRobustTight(-99),eidLoose(-99),eidTight(-99) { }
  double energy,et,gsfEt,pt,px,py,pz,phi,eta,theta,EscOverPin,EseedOverPout,hadOverEm,trackIso,ecalIso,hcalIso,caloIso,trackIsoDR03,ecalIsoDR03,hcalIsoDR03,hcalIsoDR03depth1,hcalIsoDR03depth2,caloIsoDR03,trackIsoDR04,ecalIsoDR04,hcalIsoDR04,hcalIsoDR04depth1,hcalIsoDR04depth2,caloIsoDR04,fbrem,delPhiIn,delEtaIn,genET,genPT,genPhi,genEta,genMotherET,genMotherPT,genMotherPhi,genMotherEta,vx,vy,vz,scEnergy,scRawEnergy,scSigmaEtaEta,scSigmaIEtaIEta,scE1x5,scE2x5Max,scE5x5,scEt,scEta,scPhi,scZ,tkNormChi2,tkPT,tkEta,tkPhi,tkDZ,tkD0,tkD0bs,tkD0err,mva,dist,dcot,convradius,convPointX,convPointY,convPointZ,eMax,eLeft,eRight,eTop,eBottom,e3x3,swissCross,seedEnergy,seedTime,swissCrossNoI85,swissCrossI85,E2overE9NoI85,E2overE9I85,correctedD0,correctedDZ,particleIso,chargedHadronIso,neutralHadronIso,photonIso,puChargedHadronIso;
  int    charge,classification,genId,genCharge,genMotherId,genMotherCharge,numClusters,tkNumValidHits,tkCharge,gsfCharge,isEB,isEE,isGap,isEBEEGap,isEBGap,isEEGap,isEcalDriven,isTrackerDriven,numberOfLostHits,numberOfExpectedInnerHits,numberOfValidPixelHits,numberOfValidPixelBarrelHits,numberOfValidPixelEndcapHits,isHEEP,isHEEPnoEt,seedRecoFlag,eidRobustHighEnergy,eidRobustLoose,eidRobustTight,eidLoose,eidTight;
};

// this is our new product, it is simply a 
// collection of BNelectron held in an std::vector
typedef std::vector<BNelectron> BNelectronCollection;

#endif
