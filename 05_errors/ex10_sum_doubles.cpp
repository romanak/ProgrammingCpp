// Exercise 10: print first n numbers and their sum
// use double instead of int

#include "../std_lib_facilities.h"
#include <limits>

void print_vector_limit(vector<double> v, int limit){
    if (limit>v.size()) throw runtime_error("There aren't that many numbers!");

    if (limit==0) cout << "";
    else if (limit==1) cout << v[0];
    else {
        for (int i=0; i<limit-1; ++i) {
            cout << v[i] << ", ";
        }
        cout << "and " << v[limit-1];
    }
}

void print_vector(vector<double> v){
    cout << "[";
    for (int i=0; i < v.size()-1; ++i){
        cout << v[i] << ", ";
    }
    cout << v[v.size()-1] << "]\n";
}

double get_sum(vector<double> v, int limit){
    if (limit>v.size()) throw runtime_error("There aren't that many numbers!");

    double sum=0;
    for (int i=0; i<limit; ++i)
        sum += v[i];
    return sum;
}

int main(){
    double number, sum;
    int limit;
    vector<double> numbers;
    cout << "Please enter some numbers (press '|' at prompt to stop):\n";
    while (cin>>number){
        numbers.push_back(number);
    }

    // https://latedev.wordpress.com/2011/09/13/simple-input-bullet-proofing-in-c/
    cin.clear();
    cin.ignore(numeric_limits<int>::max(), '\n');

    cout << "Please enter how many of the numbers you wish to sum, starting from the first:\n";
    cin >> limit;

    try{
        sum = get_sum(numbers, limit);
    }catch(runtime_error& e){
        cerr << "Runtime Error: " << e.what() << endl;
        keep_window_open();
        return 1;
    }

    cout << "The sum of the first " << limit << " numbers: ";
    print_vector_limit(numbers, limit);
    cout << " is " << sum << endl;

    vector<double> diffs(numbers.size()-1);
    for (int i=0; i<numbers.size()-1; ++i){
        diffs[i] = numbers[i+1]-numbers[i];
    }
    print_vector(diffs);
    
    return 0;
}
