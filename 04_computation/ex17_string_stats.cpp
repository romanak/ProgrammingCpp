// Exercise 17: find the min, max, and mode
// of a set of a sequence of strings

#include "../std_lib_facilities.h"

int main() {
    cout << "Enter a sequence of strings:\n";
    string s;
    vector<string> strings;
    while (cin >> s) {
        strings.push_back(s);
    }
    int min_idx = 0;
    int max_idx = 0;
    int mode_idx = 0; // index of mode
    int k = 0; // number of occurances
    int best_k = 0;
    for (int i = 0; i < strings.size(); ++i) {
        k = 0;
        if (strings[i] < strings[min_idx]) min_idx = i;
        if (strings[i] > strings[max_idx]) max_idx = i;
        for (int j = i; j < strings.size(); ++j) {
            if (strings[i] == strings[j]) ++k;
        }
        if (best_k < k) {
            best_k = k;
            mode_idx = i;
        }
    }
    cout << "The min of a given series of strings: " << strings[min_idx] << endl;
    cout << "The max of a given series of strings: " << strings[max_idx] << endl;
    cout << "The mode of a given series of strings: " << strings[mode_idx] << endl;
    return 0;
}
