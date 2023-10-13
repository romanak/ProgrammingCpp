// Exercise 10: play the game "Rock, Paper, Scissors"

#include "../std_lib_facilities.h"
#include <ctime>

int rand(int seed) {
    // linear congruential generator
    const int m = 2147483648; // modulus m > 0; 2^31
    const int a = 1103515245; // multiplier 0 < a < m
    const int c = 12345; // increment 0 <= c < m
    seed = (a*seed + c)%m;
    return seed;
}

char decode_move(int n) {
    char move;
    if(n < 4) move = 'r'; // rock
    else if (n < 7) move = 'p'; // paper
    else move = 's'; // scissors
    return move;
}

vector<int> decompose_decimal(int x) {
    vector<int> digits;
    while (x > 0) {
        digits.push_back(x % 10);
        x /= 10;
    }
    reverse(digits.begin(), digits.end());
    return digits;
}

void print_vector(vector<int> v) {
    cout << "[";
    for (int i=0; i < v.size()-1; ++i) {
        cout << v[i] << ", ";
    }
    cout << v[v.size()-1] << "]\n";
}

int main() {
    // seed is the current time
    int seed = time(NULL);

    // generate a random number
    int random_number = rand(seed);
    random_number = abs(random_number);
    vector<int> digits = decompose_decimal(random_number);

    // let the user make a move
    char user_move;
    char computer_move;
    int digit;
    int user_score = 0;
    int computer_score = 0;
    char play_more;
    cout << "Make your move ([r]ock, [p]aper, [s]cissors, [q]uit): ";
    while (cin >> user_move) {
        // make a new random number if the last one was used up
        if (digits.empty()) {
            random_number = rand(random_number);
            random_number = abs(random_number);
            digits = decompose_decimal(random_number);
        }

        // make a move based on the random number
        digit = digits.back();
        digits.pop_back();
        computer_move = decode_move(digit);
        if (user_move == 'r' || user_move == 'p' || user_move == 's')
            cout << "My move: " << computer_move << ". ";

        switch (user_move) {
            case 'r':
                if (computer_move == 'r') {
                    cout << "It's a draw!\n";
                    ++user_score;
                    ++computer_score;
                }
                if (computer_move == 'p') {
                    cout << "Computer won!\n";
                    ++computer_score;
                }
                if (computer_move == 's') {
                    cout << "You won!\n";
                    ++user_score;
                }
                break;
            case 'p':
                if (computer_move == 'r') {
                    cout << "You won!\n";
                    ++user_score;
                }
                if (computer_move == 'p') {
                    cout << "It's a draw!\n";
                    ++user_score;
                    ++computer_score;
                }
                if (computer_move == 's') {
                    cout << "Computer won!\n";
                    ++computer_score;
                }
                break;
            case 's':
                if (computer_move == 'r') {
                    cout << "Computer won!\n";
                    ++computer_score;
                }
                if (computer_move == 'p') {
                    cout << "You won!\n";
                    ++user_score;
                }
                if (computer_move == 's') {
                    cout << "It's a draw!\n";
                    ++user_score;
                    ++computer_score;
                }
                break;
            case 'q':
                cout << "Bye!\n";
                return 0;
            default:
                cout << "I didn't recognize your move. Try again!\n";
                break;
        }
        cout << "Your score: " << user_score << endl;
        cout << "Computer score: " << computer_score << endl;        
        cout << "Make your move ([r]ock, [p]aper, [s]cissors, [q]uit): ";
    }

    return 0;
}
