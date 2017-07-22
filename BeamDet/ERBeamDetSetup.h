// -------------------------------------------------------------------------

// -----                        ERBeamDetSetup header file              -----

// -----                              -----

// -------------------------------------------------------------------------
#ifndef ERBeamDetSETUP_H
#define ERBeamDetSETUP_H

#include <vector>
#include "Rtypes.h"

struct ERBeamDetWire{
    Float_t fX;
    Float_t fY;
    Float_t fZ;
    ERBeamDetWire(Float_t x, Float_t y, Float_t z){fX = x; fY = y; fZ = z;}
};

class ERBeamDetSetup {
    static ERBeamDetSetup* fInstance;
    static std::vector<std::vector<std::vector<ERBeamDetWire*>>> fWires;
    ERBeamDetSetup();
public:
    static ERBeamDetSetup* Instance();
    static Double_t WireX(Int_t mwpcNb, Int_t planeNb, Int_t wireNb);
    static Double_t WireY(Int_t mwpcNb, Int_t planeNb, Int_t wireNb);
    static Double_t WireZ(Int_t mwpcNb, Int_t planeNb, Int_t wireNb);
    static Int_t    SetParContainers();
    ClassDef(ERBeamDetSetup,1)

};
#endif

