#include "Gaus_class.h"

void write() {
    Gaus_class *gaus{nullptr};
    TFILE f("tree_file.root", "tree");
    TTree *T = new TTREE ("T", "hw tree");
    T->Branch("gaus", &gaus);

    Double_t px;
    Double_t py; 
    Double_t pz;

    for (Int_t i{0}; i<100;i++) {
        px = gRandom->Gaus(0,.02);
        py = gRandom->Gaus(0,.02);
        pz = gRandom->Gaus(0,.02);
        gaus = new Gaus_class(take,px,py,pz);
        T->Fill();
        delete gaus;
    }
    T->AutoSave;
}