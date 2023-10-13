// convert yen, euro, and pounds into dollars
// currency exchange rates for Jan 26, 2023

#include "../std_lib_facilities.h"

int main() {
    // conversion rates
    const double yen_dollar_rate = 0.0077;
    const double euro_dollar_rate = 1.09;
    const double pound_dollar_rate = 1.24;

    double amount = 1.0;
    char currency = ' '; // y for yen; e for euro, p for pound
    cout << "Please enter an amount followed by a currency (y, u, or p):\n";
    cin >> amount >> currency;

    if (currency == 'y')
        cout << amount << " yen == " << yen_dollar_rate*amount << " dollars\n";
    else if (currency == 'u')
        cout << amount << " euro == " << euro_dollar_rate*amount << " dollars\n";
    else if (currency == 'p')
        cout << amount << " pounds == " << pound_dollar_rate*amount << " dollars\n";
    else
        cout << "Sorry, I don't know a currency called '" << currency << "'\n";
    return 0;
}
