// Exercise 8: determine if an integer is odd or even

#include "../std_lib_facilities.h"

int main() {
    int val = 0;
    cout << "Enter an integer value: ";
    cin >> val;
    if (val % 2 == 0){
        cout << "The value " << val << " is an even number.\n";
    } else {
        cout << "The value " << val << " is an odd number.\n";
    }
    return 0;
}
