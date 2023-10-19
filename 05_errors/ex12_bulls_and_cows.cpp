// Exercise 12: Bulls and Cows game

#include "../std_lib_facilities.h"

int count_matches(vector<int> v){
    int matches = 0;
    for (int i=0; i<v.size(); ++i){
        if (v[i]==1) ++matches;
    }
    return matches;
}

vector<int> zeros(vector<int> v){
    for (int i=0; i<v.size(); ++i){
        v[i] = 0;
    }
    return v;
}

void print_vector(vector<int> v){
    cout << "[";
    for (int i=0; i < v.size()-1; ++i){
        cout << v[i] << ", ";
    }
    cout << v[v.size()-1] << "]\n";
}

int main(){
    vector<int> secret(4);
    vector<int> bulls(4);
    vector<int> cows(4);
    vector<int> guess(4);

    secret[0] = 0;
    secret[1] = 1;
    secret[2] = 8;
    secret[3] = 5;

    while(count_matches(bulls)<secret.size()){
        bulls = zeros(bulls);
        cows = zeros(cows);
        cout << "Please enter four digits as a guess:\n";
        cin >> guess[0] >> guess[1] >> guess[2] >> guess[3];

        for (int i=0; i<secret.size(); ++i){
            if (secret[i]==guess[i]) bulls[i] = 1;
            else bulls[i] = 0;
        }

        for (int i=0; i<guess.size(); ++i){
            for (int j=0; j<secret.size(); ++j){
                if (bulls[i]==0 && guess[i]==secret[j]) cows[i] = 1;
            }
        }
        print_vector(bulls);
        print_vector(cows);

        cout << count_matches(bulls) << " bulls and " << count_matches(cows) <<" cows\n";
    }

    return 0;
}
