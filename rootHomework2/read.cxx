#include "Gaus_class.h"

void read(){
    Gaus_class *gaus{nullptr};
    auto file = TFILE::Open("tree_file.root");
    TTree *T = static_cast<TTree*>(file->Get"T"));

    T->SetBranchAddress("gaus", &gaus);
    Long64_t N = T->GetEntries;

    TH2 *hist2  = new TH2("hist2", "compare px and py; px; py", 100, 0, 0.2)
    for (Int_t i{0}; i<N; i++){
        T->GetEntry(i);
        hist2->Fill(gaus)
    }
    hist2->Draw();
}