// input a series of lengths with units
// keep track of min and max values interactively
// print out min and max values, number of entries, sum of values,
// and the values in the vector at the end

#include "../std_lib_facilities.h"

int main() {
    // initialize the variables
    double n;
    string unit;
    vector<double> values;
    double value;
    double sum=0;
    cout << "Enter an integer and a unit (cm, m, in, or ft):\n";

    while (cin >> n >> unit) {
        // standardize the input to the default unit in meters
        if (unit=="cm")
            value = n/100;
        else if (unit=="m")
            value = n;
        else if (unit=="in")
            value = 2.54/100*n;
        else if (unit=="ft")
            value = 12*2.54/100*n;
        else {
            cout << "Sorry, I didn't understand the unit!\n";
            continue;
        }

        // add new value to the vector and sort it
        values.push_back(value);
        sort(values.begin(), values.end());
        
        // keep track of min and max values
        if (value == values[0])
            cout << n << unit << " the smallest so far\n";
        else if (value == values[values.size()-1])
            cout << n << unit << " the largest so far\n";
        else
            cout << n << unit << '\n';

        sum += value;
    }

    // print the final output
    cout << "smallest: " << values[0] << "m, largest: " << values[values.size()-1] << "m\n";
    cout << "number of values: " << values.size() << ", sum of values: " << sum << "m\n";

    // print the values in the vector
    cout << "values: [";
    for (int i=0; i<values.size()-1; ++i) {
        cout << values[i] << ", ";
    }
    cout << values[values.size()-1] << "]\n";

    return 0;
}
