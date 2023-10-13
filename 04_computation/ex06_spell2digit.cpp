// Exercise 6: convert spelled-out numbers into digits

#include "../std_lib_facilities.h"

int main() {
    vector<string> digits(10);
    digits[0] = "zero";
    digits[1] = "one";
    digits[2] = "two";
    digits[3] = "three";
    digits[4] = "four";
    digits[5] = "five";
    digits[6] = "six";
    digits[7] = "seven";
    digits[8] = "eight";
    digits[9] = "nine";

    cout << "Spell out a one-digit number:\n";
    string s;
    while (cin >> s) {
        for (int i=0; i<digits.size(); ++i) {
            if (digits[i] == s)
                cout << i << endl;
        }
    }
    
    return 0;
}
