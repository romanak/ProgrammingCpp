// Exercise 5: mini calculator

#include "../std_lib_facilities.h"

int main() {
    double n1;
    double n2;
    char op;
    cout << "Enter two values and an operation (+, -, *, /, %):\n";
    cin >> n1 >> n2 >> op;
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
