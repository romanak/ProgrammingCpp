// read two integer numbers and print them
#include "../std_lib_facilities.h"

int main(){
    int first;
    int second;
    cout << "Enter two integer values separated by space:\n";
    while(cin >> first >> second){
        cout << first << " " << second << "\n";
    }
    return 0;
}
