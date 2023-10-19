// Exercise 4: Temperature converter
// put the test for the absolute zero inside ctok() function

#include "../std_lib_facilities.h"

double ctok(double c) { // converts Celsius to Kelvin
    if (c<-273.15) error("The temperature is below the absolute zero.");
    double k = c + 273.15;
    return k;
}

int main() {
    double c = 0; // declare input variable
    cin >> c; // retrieve temperature to input variable
    double k = ctok(c); // convert temperature
    cout << k << endl; // print out temperature
}
