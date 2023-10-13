// implement square function using addition
// print squares of 0 to 99

#include "../std_lib_facilities.h"

int square(int x) {
    int result = 0;
    for (int i=0; i<x; ++i) {
        result += x;
    }
    return result;
}

int main() {
    for (int i=0; i<100; ++i) {
        cout << i << '\t' << square(i) << '\n';
    }
    return 0;
}
