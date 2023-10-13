// Exercise 12: find all prime numbers between 1 and max

#include "../std_lib_facilities.h"

void print_vector(vector<int> v) {
    cout << "[";
    for (int i=0; i < v.size()-1; ++i) {
        cout << v[i] << ", ";
    }
    cout << v[v.size()-1] << "]\n";
}

int main() {
    int max = 100;
    cout << "Enter the max value to search for primes:\n";
    cin >> max;
    vector<int> primes;
    bool is_prime;
    for (int i=2; i <= max; ++i) {
        is_prime = true;
        for (int j=2; j < i; ++j) {
            if (i%j == 0) {
                is_prime = false;
                break;
            }
        }
        if (is_prime) primes.push_back(i);
    }
    print_vector(primes);
    return 0;
}
