// Exercise 19: input names with scores and print them

#include "../std_lib_facilities.h"

bool includes(vector<string> v, string s) {
    for (int i = 0; i < v.size(); ++i) {
        if (v[i] == s) return true;
    }
    return false;
}

void print_scores(vector<string> names, vector<int> scores) {
    if (names.size() == scores.size()) {
        for (int i = 0; i < names.size(); ++i) {
            cout << names[i] << " " << scores[i] << endl;
        }
    }
}

int main() {
    cout << "Enter a list of scores in the format 'Name score' (terminate ";
    cout << "by entering 'No more'):\n";

    string name;
    int score;

    vector<string> names;
    vector<int> scores;

    while (cin >> name >> score) {
        if (includes(names, name)) {
            cout << name << " is already in the list. Enter a different name.\n";
        } else {
            names.push_back(name);
            scores.push_back(score);
        }
    }
    cout << endl;
    print_scores(names, scores);
    return 0;
}
