// read two float numbers and print the smallest
// if the numbers are equal, display this fact
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
    }
    return 0;
}
