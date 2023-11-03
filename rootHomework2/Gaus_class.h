#ifndef _Gausclass_H_
#define _Gausclass_H_

#include <TObject.h>

class Gaus_class : public TObject {
    public:
        Gaus_class(); //default
        Gaus_class( Double_t px, Double_t py, Double_t pz); 
        virtual ~Gaus_class(); 
    private:
        Double_t px;
        Double_t py;
        Double_t pz;

        Double_t magnitude();
    ClassDef(Gaus_class, 1); 
};


#endif 