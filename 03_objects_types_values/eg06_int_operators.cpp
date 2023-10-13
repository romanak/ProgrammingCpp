// simple program to exercise integer operators

#include "../std_lib_facilities.h"

int main() {
    cout << "Please enter an integer value: ";
    int n;
    cin >> n;
    cout << "n == " << n
        << "\nn+1 == " << n+1
        << "\nthree times n == " << 3*n
        << "\ntwice n == " << n+n
        << "\nn squared == " << n*n
        << "\nn integer divided by 2 == " << n/2
        << "\nn modulo 2 == " << n%2
        << "\nsquare root of n == " << sqrt(n)
        << endl; // another name for newline ("end of line")
    return 0;
}
