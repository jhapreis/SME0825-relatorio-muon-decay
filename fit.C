void fit(){
    // auto c1 = new TCanvas("canvas", "canvas", 1920, 1080);
    auto f = new TFile("time_diff.root");

    auto hist = new TH1F("hist", "hist", 200, 0, 10);

    auto fit = new TF1("fit", "[0]*exp(-x/[1])+[2]");
    fit->SetParNames("A", "tau", "C");
    fit->SetParameters(200., 2., 10.);

    hist->Fit("fit");
    hist->Draw();
    // fit->Draw();
    return;
}
