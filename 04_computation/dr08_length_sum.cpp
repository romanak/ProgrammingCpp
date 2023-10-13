// read lengths with units in a loop
// if the number is smallest or largest so far, print it
// keep track of the sum
#include "../std_lib_facilities.h"

int main(){
    double smallest;
    double largest;
    double sum = 0;
    double length = 0;
    double length_meters = 0;
    bool first_run = true;
    int num_values = 0;
    string unit = "";
    cout << "Enter a length measure as a float followed by a unit:\n";
    while(cin >> length >> unit){
        if (unit == "m")
            length_meters = length;
        else if (unit == "cm")
            length_meters = 0.01 * length;
        else if (unit == "in")
            length_meters = 0.0254 * length;
        else if (unit == "ft")
            length_meters = 0.0253 * 12 * length;
        else {
            cout << "Unsupported unit: " << unit << ". The length is not recognized.\n";
            continue;
        }
        if (first_run){
            smallest = length_meters;
            largest = length_meters;
            first_run = false;
        }
        if (length_meters < smallest){
            cout << length << unit << " the smallest so far" << "\n";
            smallest = length_meters;
        }
        else if (length_meters > largest){
            cout << length << unit << " the largest so far"  << "\n";
            largest = length_meters;
        }
        else
            cout << length << unit << "\n";
        sum += length_meters;
        ++num_values;
    }
    cout << "Number of values entered: " << num_values << endl;
    cout << "Sum of values entered: " << sum << "m" << endl;
    cout << "Largest value: " << largest << "m" << endl;
    cout << "Smallest value: " << smallest << "m" << endl;
    return 0;
}
