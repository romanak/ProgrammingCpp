// Exercise 20: output score corresponding to a given name

#include "../std_lib_facilities.h"

int indexOf(vector<string> v, string s) {
    for (int i = 0; i < v.size(); ++i) {
        if (v[i] == s) return i;
    }
    return -1;
}

int main() {
    cout << "Enter a name to get the score:\n";

    vector<string> names(5);
    names[0] = "Jane";
    names[1] = "Rick";
    names[2] = "Sally";
    names[3] = "Trevor";
    names[4] = "Bill";

    vector<int> scores(5);
    scores[0] = 91;
    scores[1] = 82;
    scores[2] = 96;
    scores[3] = 78;
    scores[4] = 94;

    string name;
    int score;
    int idx;

    while (cin >> name) {
        idx = indexOf(names, name);
        if (idx > -1) {
            score = scores[idx];
            cout << "Score for " << name << " is " << score << endl;
        } else {
            cout << "name not found\n";
        }
    }
    return 0;
}
