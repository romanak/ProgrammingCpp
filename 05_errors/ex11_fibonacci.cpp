// Exercise 11: print out Fibonacci numbers

#include "../std_lib_facilities.h"

void print_vector(vector<int> v){
    cout << "[";
    for (int i=0; i < v.size()-1; ++i){
        cout << v[i] << ", ";
    }
    cout << v[v.size()-1] << "]\n";
}

int main(){
    int n;
    cout << "How many Fibonacci numbers to write?\n";
    cin >> n;
    if (n<0) error("Enter a non-negative number!");

    vector<int> fibonacci(n);
    fibonacci[0] = 1;
    fibonacci[1] = 1;

    if (n==0) cout << "[]\n";
    else if (n==1) cout << "[1]\n";
    else if (n==2) cout << "[1, 1]\n";
    else{
        for (int i=2; i<n; ++i){
            fibonacci[i] = fibonacci[i-2]+fibonacci[i-1];
        }
        print_vector(fibonacci);
    }
    
    return 0;
}