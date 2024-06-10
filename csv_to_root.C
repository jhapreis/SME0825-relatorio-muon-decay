void csv_to_root(){
    auto rdf = ROOT::RDF::FromCSV("time_diff.csv");
    rdf.Snapshot("tree", "time_diff.root");
}
