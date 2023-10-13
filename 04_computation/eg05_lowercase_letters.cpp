// print lowercase letters and corresponding ASCII code using a while loop

#include "../std_lib_facilities.h"

int main() {
    int i = 0;
    while (i < 26) { // 26 lowercase letters
        cout << char('a'+i) << '\t' << int('a'+i) << '\n';
        ++i;
    }
    return 0;
}
