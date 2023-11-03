#include <iostream>
#include <cmath>
#include "Gaus_class.h"

ClassImp(Gaus_class)

Gaus_class::Gaus_class() :
px{0},
py{0},
pz{0}
{
}
Gaus_class::Gaus_class(Double_t px, Double_t py, Double_t pz):
px{px},
py{py},
pz{pz}
{ magnitude();
}
// destructor
Gaus_class::~Gaus_class(){
}

Double_t Gaus_class::magnitude() {
   return sqrt((px*px) + (py*py) + (pz*pz)
    );
}
/* 
?????
1: If not specified, members of a struct are public
 by default and members of a class are private by default.
2: Changed name to Gaus_class, as input later on will 
 be random Gaussian numbers.
3: This guarantees a common set of methods and enables us to 
 use a common set of containers as all objects are derived from 
 same base class.
?????
*/