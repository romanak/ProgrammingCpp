// Exercise 9: convert a spelled-out number to a digit

#include "../std_lib_facilities.h"

int main() {
    string s = " ";
    int val = -1;
    cout << "Spell out a number (zero to four): ";
    cin >> s;
    if (s == "zero")
        val = 0;
    if (s == "one")
        val = 1;
    if (s == "two")
        val = 2;
    if (s == "three")
        val = 3;
    if (s == "four")
        val = 4;

    if (val > -1)
        cout << "The number is " << val << ".\n";
    else
        cout << "Not a number I know.\n";
    return 0;
}
