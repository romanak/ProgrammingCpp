// Exercise 16: find the mode of a set of positive integers

#include "../std_lib_facilities.h"

int main() {
    cout << "Enter a set of positive integers:\n";
    int x;
    vector<int> numbers;
    while (cin >> x) {
        numbers.push_back(x);
    }
    int mode_idx = 0; // index of mode
    int best_k = 0;
    int k = 0; // number of occurances
    for (int i = 0; i < numbers.size(); ++i) {
        k = 0;
        for (int j = i; j < numbers.size(); ++j) {
            if (numbers[i] == numbers[j])
                ++k;
        }
        if (best_k < k) {
            best_k = k;
            mode_idx = i;
        }
    }
    cout << "The mode of a given series of numbers: " << numbers[mode_idx] << endl;
    return 0;
}
