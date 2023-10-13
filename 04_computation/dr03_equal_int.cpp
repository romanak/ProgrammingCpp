// read two integer numbers and print the smallest
// if the numbers are equal, display this fact
#include "../std_lib_facilities.h"

int main(){
    int first;
    int second;
    cout << "Enter two integer values separated by space:\n";
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
