// Exercise 18: solve a quadratic equation

#include "../std_lib_facilities.h"

int main() {
    cout << "Enter coefficients a, b, and c for the equation ax^2 + bx +c = 0:\n";
    double a;
    double b;
    double c;
    cin >> a >> b >> c;
    
    double discriminant = b*b - 4*a*c;
    if (discriminant < 0) {
        cout << "The equation does not have real solutions.\n";
        return 0;
    }
    
    double x1 = (-b - sqrt(discriminant))/(2*a);
    double x2 = (-b + sqrt(discriminant))/(2*a);

    cout << "The solutions are x1 = " << x1 << " and x2 = " << x2 << endl;
    return 0;
}
