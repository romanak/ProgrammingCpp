// convert yen, euro, pounds, yuan, and kroner into dollars using switch statements
// currency exchange rates on Jan 26, 2023

#include "../std_lib_facilities.h"

int main() {
    // conversion rates
    const double yen_dollar_rate = 0.0077;
    const double euro_dollar_rate = 1.09;
    const double pound_dollar_rate = 1.24;
    const double yuan_dollar_rate = 0.15;
    const double krone_dollar_rate = 0.10;

    double amount = 1.0;
    char currency = ' ';
    cout << "Please enter an amount followed by a currency (y for yen, ";
    cout << "u for euro, p for pound, c for yuan, k for krone):\n";
    cin >> amount >> currency;

    switch (currency) {
        case 'y':
            cout << amount << " yen == " << yen_dollar_rate*amount << " dollars\n";
            break;
        case 'u':
            cout << amount << " euro == " << euro_dollar_rate*amount << " dollars\n";
            break;
        case 'p':
            cout << amount << " pounds == " << pound_dollar_rate*amount << " dollars\n";
            break;
        case 'c':
            cout << amount << " yuan == " << yuan_dollar_rate*amount << " dollars\n";
            break;
        case 'k':
            cout << amount << " kroner == " << krone_dollar_rate*amount << " dollars\n";
            break;
        default:
            cout << "Sorry, I don't know a currency called '" << currency << "'\n";
            break;
    }
    return 0;
}
