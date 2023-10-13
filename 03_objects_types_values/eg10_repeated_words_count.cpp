// identify repeated words with word count

#include "../std_lib_facilities.h"

int main() {
    int number_of_words = 0;
    string previous = " "; // not a word
    string current;
    cout << "In order to exit, press Ctrl+D in Linux or Ctrl+Z in Windows.\n";
    while (cin >> current) {
        ++number_of_words; // increase word count
        if (previous == current)
            cout << "words number " << number_of_words
                << " repeated: " << current << '\n';
        previous = current;
    }  
    return 0;
}
