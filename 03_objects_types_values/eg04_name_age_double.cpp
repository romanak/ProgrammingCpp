// read name and decimal age

#include "../std_lib_facilities.h"

int main() {
    cout << "Please enter your first name and age\n";
    string first_name = "???"; // string variable, "???" for no name
    double age = -1; // integer variable, -1 for no age
    cin >> first_name >> age; // read a string followed by an integer
    cout << "Hello, " << first_name << " (age " << age << ")\n";
    return 0;
}
