// read float numbers in a loop
// if the number is smallest or largest so far, print it
#include "../std_lib_facilities.h"

int main(){
    double smallest;
    double largest;
    double n;
    bool first_run = true;
    cout << "Enter a floating point number:\n";
    while(cin >> n){
        if (first_run){
            smallest = n;
            largest = n;
            first_run = false;
        }
        if (n < smallest){
            cout << n << " the smallest so far" << "\n";
            smallest = n;
        }
        else if (n > largest){
            cout << n << " the largest so far"  << "\n";
            largest = n;
        }
        else
            cout << n << "\n";
    }
    return 0;
}
