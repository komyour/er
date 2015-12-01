#ifndef ERNEURADDIGIPAR_H
#define ERNEURADDIGIPAR_H


#include "FairParGenericSet.h"

#include "TObject.h"
#include "TObjArray.h"
#include "TArrayF.h"
#include "TArrayI.h"

class FairParIo;
class FairParamList;


class ERNeuRadDigiPar : public FairParGenericSet
{

  public:

    /** Standard constructor **/
    ERNeuRadDigiPar(const char* name    = "ERNeuRadDigiPar",
                            const char* title   = "ERNeuRad Digitization Parameters",
                            const char* context = "Default");


    /** Destructor **/
    virtual ~ERNeuRadDigiPar();


    /** Initialisation from input device**/
    virtual Bool_t init(FairParIo* input);


    /** Output to file **/
    //virtual Int_t write(FairParIo* output);

    virtual void print();
    
    /** Reset all parameters **/
    virtual void clear();

    void putParams(FairParamList*);
    Bool_t getParams(FairParamList*);
    
    /** Accessories  **/
    Int_t   NofFibers()     const {return fNofFibers;}
    Double_t FiberLength() const {return fFiberLength;}
    //@todo �������� ��������� ������ ��� �������
    Double_t PMTQuantumEfficiency (Int_t iFiber) const {return (*fPMTQuantumEfficiency)[iFiber];}
    Double_t PMTGain (Int_t iFiber) const {return (*fPMTGain)[iFiber];}
  private:
    Float_t fFiberLength;
    TArrayF* fPMTQuantumEfficiency;
    TArrayF* fPMTGain;
    Int_t fNofFibers; 

    ERNeuRadDigiPar(const ERNeuRadDigiPar&);
    ERNeuRadDigiPar& operator=(const ERNeuRadDigiPar&);

    ClassDef(ERNeuRadDigiPar,1);
};


#endif /**  ERNEURADDIGIPAR_H   **/
