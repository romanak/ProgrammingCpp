// print lowercase letters, uppercase letters, and digits
// with corresponding ASCII code using a for loop

#include "../std_lib_facilities.h"

int main() {
    for (int i=0; i<26; ++i) { // 26 lowercase letters
        cout << char('a'+i) << '\t' << int('a'+i) << '\n';
    }
    for (int i=0; i<26; ++i) { // 26 uppercase letters
        cout << char('A'+i) << '\t' << int('A'+i) << '\n';
    }
    for (int i=0; i<10; ++i) { // 10 digits
        cout << char('0'+i) << '\t' << int('0'+i) << '\n';
    }
    return 0;
}
