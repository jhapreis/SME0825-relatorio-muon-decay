void hist()
{
    auto c1 = new TCanvas("c", "expfit");
    auto rdf = ROOT::RDF::FromCSV("time_diff.csv");
    auto h = rdf.Histo1D("time_micro_sec");
    h->Draw();
}
