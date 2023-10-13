// Exercise 7: mini calculator with spelled numbers

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

    vector<string> nums(10);
    nums[0] = "0";
    nums[1] = "1";
    nums[2] = "2";
    nums[3] = "3";
    nums[4] = "4";
    nums[5] = "5";
    nums[6] = "6";
    nums[7] = "7";
    nums[8] = "8";
    nums[9] = "9";

    string s1 = " ";
    string s2 = " ";
    char op = ' ';
    double n1 = 0;
    double n2 = 0;
    int match = 0; // count matched numbers
    cout << "Enter two one-digit numbers and an operation (+, -, *, /, %):\n";

    cin >> s1 >> s2 >> op;
    for (int i = 0; i < 10; ++i) {
            if (digits[i] == s1 || nums[i] == s1) {
                n1 = i;
                ++match;
            }
            if (digits[i] == s2 || nums[i] == s2) {
                n2 = i;
                ++match;
            }
        }
    if (match < 2) {
        cout << "I don't know the digit, terminating...\n";
        return -1;
    }

    switch (op) {            
        case '+':
            cout << "The sum of " << n1 << " and " << n2 << " is " <<
                n1+n2 << '\n';
            break;
        case '-':
            cout << "The difference of " << n1 << " and " << n2 << " is "
                << n1-n2 << '\n';
            break;
        case '*':
            cout << "The multiplication of " << n1 << " and " << n2 << " is "
                << n1*n2 << '\n';
            break;
        case '/':
            cout << "The ratio of " << n1 << " and " << n2 << " is "
                << n1/n2 << '\n';
            break;
        case '%':
            cout << "The modulo of " << n1 << " and " << n2 << " is "
                << n1 - n2*int(n1/n2) << '\n';
            break;
        default:
            cout << "Unknown operation, terminating...\n";
            break;
    }

    return 0;
}
