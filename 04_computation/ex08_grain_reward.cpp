// Exercise 8: calculate the number of squares required to give at least
// 1000 grains of rice, 1,000,000 grains, and 1,000,000,000 grains

#include "../std_lib_facilities.h"

int main() {
    int square = 1;
    int current_grains = 1;
    int sum_grains = 1;

    while (sum_grains < 1000) {
        ++square;
        current_grains *= 2;
        sum_grains += current_grains;
        cout << "square " << square << " has " << current_grains
            << " grains, total: " << sum_grains << endl;
    }
    cout << '\n' << square <<
        " squares are required to give at least 1000 grains of rice\n\n";

    while (sum_grains < 1000000) {
        ++square;
        current_grains *= 2;
        sum_grains += current_grains;
        cout << "square " << square << " has " << current_grains
            << " grains, total: " << sum_grains << endl;
    }
    cout << '\n' << square <<
        " squares are required to give at least 1,000,000 grains of rice\n\n";

    while (sum_grains < 1000000000) {
        ++square;
        current_grains *= 2;
        sum_grains += current_grains;
        cout << "square " << square << " has " << current_grains
            << " grains, total: " << sum_grains << endl;
    }
    cout << '\n' << square <<
        " squares are required to give at least 1,000,000,000 grains of rice\n\n";

    return 0;
}
