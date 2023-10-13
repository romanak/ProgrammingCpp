// Exercise 6: spell out digits

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

    cout << "Enter a digit:\n";
    int n;
    while (cin >> n) {
        if (n>=0 && n<=9)
            cout << digits[n] << endl;
        else
            cout << "Enter a one-dgit number!\n";
    }

    return 0;
}
