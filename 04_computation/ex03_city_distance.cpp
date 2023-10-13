// Exercise 3: collect distances between cities on a given route
// compute sum, min, max, and mean of distances

#include "../std_lib_facilities.h"

int main() {
    vector<double> dists;
    double dist;
    cout << "Enter a sequence of distances between cities in km:\n";

    while (cin>>dist) { // read value
        if (dist>0) dists.push_back(dist); // put into vector
        else cout << "Distance should be a positive value!\n";
    }
    
    if (dists.size() < 1) {
        cout << "No distances provided!";
        return 1;
    }

    // compute min, max, and mean distance
    sort(dists.begin(), dists.end());
    double sum = 0;
    for (int i=0; i<dists.size(); ++i) {
        sum += dists[i];
    }
    double mean = sum/dists.size();

    // output resutls
    cout << "Total distance: " << sum << "km\n";
    cout << "Smallest distance: " << dists[0] << "km\n";
    cout << "Greatest distance: " << dists[dists.size()-1] << "km\n";
    cout << "Mean distance: " << mean << "km\n";

    return 0;
}
