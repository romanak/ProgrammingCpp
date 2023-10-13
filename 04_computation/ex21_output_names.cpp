// Exercise 21: output names corresponding to a given score

#include "../std_lib_facilities.h"

int indexOf(vector<int> v, int s, int start) {
    for (int i = start; i < v.size(); ++i) {
        if (v[i] == s) return i;
    }
    return -1;
}

int main() {
    cout << "Enter a score to get the names:\n";

    vector<string> names(5);
    names[0] = "Jane";
    names[1] = "Rick";
    names[2] = "Sally";
    names[3] = "Trevor";
    names[4] = "Bill";

    vector<int> scores(5);
    scores[0] = 94;
    scores[1] = 82;
    scores[2] = 94;
    scores[3] = 78;
    scores[4] = 94;

    string name;
    int score;
    int idx;

    while (cin >> score) {
        idx = indexOf(scores, score, 0);
        if (idx > -1) {
            while (idx > -1) {
                cout << names[idx] << " ";
                idx = indexOf(scores, score, idx+1);
            }
            cout << endl;
        } else {
            cout << "score not found\n";
        }
    }
    return 0;
}
