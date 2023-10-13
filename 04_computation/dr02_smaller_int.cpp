// read two integer numbers and print the smallest
#include "../std_lib_facilities.h"

int main(){
    int first;
    int second;
    cout << "Enter two integer values separated by space:\n";
    while(cin >> first >> second){
        if (first < second)
            cout << "The samller is " << first << "\n";
        else
            cout << "The samller is " << second << "\n";
    }
    return 0;
}
