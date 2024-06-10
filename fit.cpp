#include "TCanvas.h"
#include "TFile.h"
#include "TF1.h"
#include "TH1F.h"

int main(){
    auto c1 = new TCanvas("canvas", "canvas", 1920, 1080);
    auto f = new TFile("time_diff.root");

    auto hist = new TH1F("hist", "hist", 200, 0, 10);
    hist->Draw();

    auto fit = new TF1("f", "[0]*exp(-x/[1])+[2]");
    fit->SetParNames("A", "tau", "C");
    fit->SetParameters(200., 2., 10.);

    hist->Fit(fit);

    fit->Draw();

    return 0;
}
