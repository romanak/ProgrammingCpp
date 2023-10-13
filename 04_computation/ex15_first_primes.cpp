// Exercise 15: find first n primes

#include "../std_lib_facilities.h"

void print_vector(vector<int> v) {
    cout << "[";
    for (int i=0; i < v.size()-1; ++i) {
        cout << v[i] << ", ";
    }
    cout << v[v.size()-1] << "]\n";
}

int main() {
    int n = 100;
    cout << "Enter the number of primes to display:\n";
    cin >> n;

    // upper bound is derived from the prime number theorem
    int upper_bound;
    if (n < 1) {
        cout << "Number of primes should be positive!\n";
        return -1;
    }
    else if (n <= 2) upper_bound = 3;
    else upper_bound = n*log(n) + n*(1 + log(log(n)));

    vector<int> map_primes(upper_bound + 1); // boolean vector to map primes
    map_primes[0] = 0; // 0 is not prime
    map_primes[1] = 0; // 1 is not prime
    for (int i = 2; i <= upper_bound; ++i) {
        map_primes[i] = 1; // initialize all numbers to true at first
    }

    // Sieve of Eratosthenes algorithm
    // mark all multiples of the first encountered prime as composite
    for (int i = 2; i <= int(sqrt(upper_bound)); ++i) {
        if (map_primes[i] == 1) {
            for (int j = i*i; j <= upper_bound; j += i) {
                map_primes[j] = 0;
            }
        }
    }

    // generate a vector of prime numbers from the prime mapping
    vector<int> primes;
    for (int i = 2; i <= upper_bound; ++i) {
        if (map_primes[i] == 1) {
            primes.push_back(i);
        }
    }

    // vector to display primes
    vector<int> display_primes;
    for (int i = 0; i < n; ++i) {
        display_primes.push_back(primes[i]);
    }

    print_vector(display_primes);
    cout << "Number of primes found: " << primes.size() << endl;
    cout << "Number of primes displayed: " << display_primes.size() << endl;
    return 0;
}
