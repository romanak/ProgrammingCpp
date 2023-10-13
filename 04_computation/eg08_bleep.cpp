// print out the input words and mask specified words by 'BLEEP'

#include "../std_lib_facilities.h"

int main() {
    vector<string> words;
    string word;

    cout << "Enter words that you like and don't like (press Ctrl+Z in Windows ";
    cout << "or Ctrl+D in Linux followed by the Enter key when you finish):\n";
    
    while (cin>>word) // read whitespace-separated words
        words.push_back(word); // put words into vector
    cout << "Number of words: " << words.size() << endl;
    
    for (int i=0; i<words.size(); ++i) {
        if (words[i]=="Broccoli" || words[i]=="Garlic")
            cout << "BLEEP\n";
        else
            cout << words[i] << '\n';
    }
    return 0;
}
