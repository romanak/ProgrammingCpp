// safe conversions

#include "../std_lib_facilities.h"

int main() {
    char c = 'x';
    int i1 = c;
    int i2 = 'x';
    char c2 = i1;
    cout << c << ' ' << i1 << ' ' << i2 << ' ' << c2 << '\n';
    return 0;
}
