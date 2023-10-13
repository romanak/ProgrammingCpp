// Exercise 5: floating-point numbers comparison

#include "../std_lib_facilities.h"

int main() {
    double val1 = 0;
    double val2 = 0;
    cout << "Enter two floating-point values: ";
    cin >> val1 >> val2;

    double smallest = val1;
    double largest = val1;
    if (val1 < val2)
        largest = val2;
    if (val1 > val2)
        smallest = val2;

    cout << "Smallest: " << smallest << "\nLargest: " <<
        largest << "\nSum: " << val1+val2 << "\nDifference: " <<
        val1-val2 << "\nProduct: " << val1*val2 << "\nRatio: " <<
        val1/val2 << "\n";
    
    return 0;
}
