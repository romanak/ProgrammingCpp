// Exercise 5: Temperature converter
// add Kelvin to Celsius conversion

#include "../std_lib_facilities.h"

double c2k(double c) { // converts Celsius to Kelvin
    if (c<-273.15) error("The temperature is below the absolute zero.");
    double k = c + 273.15;
    return k;
}

double k2c(double k) { // converts Kelvin to Celsius
    if (k<0) error("The temperature is below the absolute zero.");
    double c = k - 273.15;
    return c;
}

int main() {
    double temperature = 0; // declare input variable
    char scale = ' '; // declare the temperature scale variable
    double kelvin = 0;
    double celsius = 0;
    cin >> temperature >> scale; // retrieve temperature to input variable
    switch (scale) {
        case 'c':
            celsius = temperature;
            kelvin = c2k(temperature);
            break;
        case 'k':
            kelvin = temperature;
            celsius = k2c(temperature);
            break;
        default:
            error("Unrecognized scale. Terminating...");
    }
    cout << celsius << " C = " << kelvin << " K" << endl; // print out temperature
}
