// Exercise 4: integer numbers comparison

#include "../std_lib_facilities.h"

int main() {
    int val1 = 0;
    int val2 = 0;
    cout << "Enter two integer values: ";
    cin >> val1 >> val2;

    int smallest = val1;
    int largest = val1;
    if (val1 < val2)
        largest = val2;
    if (val1 > val2)
        smallest = val2;

    cout << "Smallest: " << smallest << "\nLargest: " <<
        largest << "\nSum: " << val1+val2 << "\nDifference: " <<
        val1-val2 << "\nProduct: " << val1*val2 << "\nRatio: " <<
        (double) val1/val2 << "\n";
    
    return 0;
}
