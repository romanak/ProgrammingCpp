// Exercise 13: find all prime numbers between 1 and 100
// using the Sieve of Eratosthenes algorithm

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
    vector<int> map_primes(max+1); // boolean vector to map primes
    map_primes[0] = 0; // 0 is not prime
    map_primes[1] = 0; // 1 is not prime
    for (int i = 2; i <= max; ++i) {
        map_primes[i] = 1; // initialize all to true
    }

    // mark all multiples of first encountered prime as composite
    for (int i = 2; i <= int(sqrt(max)); ++i) {
        if (map_primes[i] == 1) {
            for (int j = i*i; j <= max; j += i) {
                map_primes[j] = 0;
            }
        }
    }

    // generate a vector of prime numbers from the prime mapping
    vector<int> primes;
    for (int i = 2; i <= max; ++i) {
        if (map_primes[i] == 1) {
            primes.push_back(i);
        }
    }

    print_vector(primes);
    return 0;
}
