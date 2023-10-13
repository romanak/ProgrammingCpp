// Exercise 6: print three integers in order

#include "../std_lib_facilities.h"

int main() {
    int val1 = 0;
    int val2 = 0;
    int val3 = 0;
    cout << "Enter three integer values: ";
    cin >> val1 >> val2 >> val3;

    int temp = 0;
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
