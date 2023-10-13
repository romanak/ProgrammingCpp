// read two float numbers and print the smallest
// if the numbers are very close, display this fact
#include "../std_lib_facilities.h"

int main(){
    double first;
    double second;
    cout << "Enter two floating point numbers separated by a space:\n";
    while(cin >> first >> second){
        if (first < second)
            cout << "The samller is " << first << "\n";
        else if (first > second)
            cout << "The samller is " << second << "\n";
        else
            cout << "The numbers are equal.\n";
        
        if (abs(first - second) < 1.0/10000000)
            cout << "The numbers are almost equal.\n";
    }
    return 0;
}
