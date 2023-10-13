// Exercise 11: calculate the value of coins

#include "../std_lib_facilities.h"

int main() {
    int pennies = 0;
    int nickels = 0;
    int dimes = 0;
    int quarters = 0;
    int half_dollars = 0;
    int dollar_coins = 0;
    double sum = 0;

    cout << "How many pennies do you have? ";
    cin >> pennies;
    cout << "How many nickels do you have? ";
    cin >> nickels;
    cout << "How many dimes do you have? ";
    cin >> dimes;
    cout << "How many quarters do you have? ";
    cin >> quarters;
    cout << "How many half dollars do you have? ";
    cin >> half_dollars;
    cout << "How many dollar coins do you have? ";
    cin >> dollar_coins;

    sum = pennies + 5*nickels + 10*dimes + 25*quarters +
        50*half_dollars + 100*dollar_coins;
    
    if (pennies == 1)
        cout << "You have " << pennies << " penny.\n";
    else if (pennies > 1)
        cout << "You have " << pennies << " pennies.\n";

    if (nickels == 1)
        cout << "You have " << nickels << " nickel.\n";
    else if (nickels > 1)
        cout << "You have " << nickels << " nickels.\n";
    
    if (dimes == 1)
        cout << "You have " << dimes << " dime.\n";
    else if (dimes > 1)
        cout << "You have " << dimes << " dimes.\n";
    
    if (quarters == 1)
        cout << "You have " << quarters << " quarter.\n";
    else if (quarters > 1)
        cout << "You have " << quarters << " quarters.\n";

    if (half_dollars == 1)
        cout << "You have " << half_dollars << " half dollar.\n";
    else if (half_dollars > 1)
        cout << "You have " << half_dollars << " half dollars.\n";

    if (dollar_coins == 1)
        cout << "You have " << dollar_coins << " dollar coin.\n";
    else if (dollar_coins > 1)
        cout << "You have " << dollar_coins << " dollar coins.\n";

    cout << "The value of your coins is $" << sum/100 << ".\n";
    return 0;
}
