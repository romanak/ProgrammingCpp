// Exercise 2: convert miles to kilometers

#include "../std_lib_facilities.h"

int main() {
    double mi = 0;
    double km = 0;
    cout << "Enter a value in miles: ";
    cin >> mi;
    km = 1.609 * mi;
    cout << mi << " miles = " << km << " kilometers.\n";
    return 0;
}
