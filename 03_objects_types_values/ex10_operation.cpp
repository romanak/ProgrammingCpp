// Exercise 10: perform an operation followed by two operands

#include "../std_lib_facilities.h"

int main() {
    string operation = " ";
    double operand1 = 0;
    double operand2 = 0;
    double result = 0;

    cout << "Enter an operation followed by two operands (eg. + 2 1.5): ";
    cin >> operation >> operand1 >> operand2;

    if (operation == "+")
        result = operand1 + operand2;
    else if (operation == "-")
        result = operand1 - operand2;
    else if (operation == "*")
        result = operand1 * operand2;
    else if (operation == "/")
        result = operand1 / operand2;
    else
        error("I did not recognize your input!");
    
    cout << operand1 << operation << operand2 << "=" << result;
    return 0;
}
