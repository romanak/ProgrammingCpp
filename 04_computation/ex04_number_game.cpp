// Exercise 4: user think of a number between 1 and 100
// computer will guess the number by asking no more than 7 questions

#include "../std_lib_facilities.h"

int main() {
    cout << "Think of a number between 1 and 100.\n";

    int lower_bound = 1; // left boundary
    int upper_bound = 100; // right boundary
    int middle = 50; // middle of guess space
    char hint = ' '; // y/n from the user
    int i = 1; // count the number of questions

    while (lower_bound < upper_bound) {
        if (i > 7) {
            cout << "Something went wrong. Exiting..." << endl;
            break;
        }

        cout << "(" << i << ") Is the number you are thinking of less than "
            << middle << "? (y/n)\n";
        cin >> hint;
        switch (hint) {
            case 'y':
                upper_bound = --middle; // note question asks (strictly) less than
                ++i;
                break;
            case 'n':
                lower_bound = middle; // new left boundary includs the middle
                ++i;
                break;
            default:
                cout << "I didn't understand your input.\n";
                continue;
                break;
        }

        middle = (lower_bound + upper_bound)/2;
        // compensate +1 to the right in case of inbalanced split
        if ((lower_bound + upper_bound)%2 != 0) ++middle;
    }

    if (i <= 8)
        cout << "Your number is " << lower_bound << "!\n";

    return 0;
}
