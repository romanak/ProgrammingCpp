// Exercise 2: compute mean and median temperature

#include "../std_lib_facilities.h"

int main() {
    vector<double> temps;
    double temp;
    cout << "Enter a sequence of temperatures:\n";

    while (cin>>temp) // read value
        temps.push_back(temp); // put into vector
        
    // compute mean temperature
    double sum = 0;
    double mean = 0;
    for (int i=0; i<temps.size(); ++i) sum += temps[i];
    mean = sum/temps.size();
    cout << "Average temperature: " << mean << endl;

    // compute median temperature
    double median = 0;
    sort(temps.begin(), temps.end());
    if (temps.size()%2 == 0) // if size is even
        median = (temps[temps.size()/2] + temps[temps.size()/2-1])/2.0;
    else // if size is odd
        median = temps[temps.size()/2];
    cout << "Median temperature: " << median << endl;

    return 0;
}
