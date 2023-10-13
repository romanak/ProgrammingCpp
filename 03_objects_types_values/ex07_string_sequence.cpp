// Exercise 7: print three strings in order

#include "../std_lib_facilities.h"

int main() {
    string val1 = " ";
    string val2 = " ";
    string val3 = " ";
    cout << "Enter three string values: ";
    cin >> val1 >> val2 >> val3;

    string temp = " ";
    bool ordered = false;
    while (ordered == false) {
        ordered = true;
        if (val1 > val2) {
            temp = val1;
            val1 = val2;
            val2 = temp;
            ordered = false;
        }
        if (val1 > val3) {
            temp = val1;
            val1 = val3;
            val3 = temp;
            ordered = false;
        }
        if (val2 > val3) {
            temp = val2;
            val2 = val3;
            val3 = temp;
            ordered = false;
        }
    }

    cout << val1 << ", " << val2 << ", " << val3 << "\n";
    return 0;
}
