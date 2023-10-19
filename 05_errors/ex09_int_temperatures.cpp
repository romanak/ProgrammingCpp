// Exercise 9: Temperature converter
// convert Celsius to Fahrenheit and reverse
// produce error if the result cannot be represented as int

#include "../std_lib_facilities.h"

double c2f(double c) { // converts Celsius to Fahrenheit
    if (c<-273.15) error("The temperature is below the absolute zero.");
    double f = c*9.0/5 + 32;
    if ((int)f != f) error("The result cannot be represented as an integer!");
    return f;
}

double f2c(double f) { // converts Fahrenheit to Celsius
    if (f<-459.67) error("The temperature is below the absolute zero.");
    double c = (f - 32)*5.0/9;
    if ((int)c != c) error("The result cannot be represented as an integer!");
    return c;
}

int main() {
    double temperature = 0; // declare input variable
    char scale = ' '; // declare the temperature scale variable
    double f = 0;
    double c = 0;
    cin >> temperature >> scale; // retrieve temperature to input variable
    switch (scale) {
        case 'c':
            c = temperature;
            f = c2f(temperature);
            break;
        case 'f':
            f = temperature;
            c = f2c(temperature);
            break;
        default:
            error("Unrecognized scale. Terminating...");
    }
    cout << c << " C = " << f << " F" << endl; // print out temperature
}
