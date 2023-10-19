// Exercise 14: week days

#include "../std_lib_facilities.h"

void print_vector(vector<int> v){
    if (v.size()>0){
        cout << "[";
        for (int i=0; i < v.size()-1; ++i){
            cout << v[i] << ", ";
        }
        cout << v[v.size()-1] << "]\n";
    }else{
        cout << "[]\n";
    }
}

int sum_vector(vector<int> v){
    int sum = 0;
    for (int i=0; i<v.size(); ++i){
        sum += v[i];
    }
    return sum;
}

int main(){
    vector<int> monday;
    vector<int> tuesday;
    vector<int> wednesday;
    vector<int> thursday;
    vector<int> friday;
    vector<int> saturday;
    vector<int> sunday;
    int rejected = 0;
    string day;
    int value;

    while (cin>>day>>value){
        if (day=="Monday" || day=="Mon" or day=="monday") monday.push_back(value);
        else if (day=="Tuesday" || day=="Tue" or day=="tuesday") tuesday.push_back(value);
        else if (day=="Wednesday" || day=="Wed" or day=="wednesday") wednesday.push_back(value);
        else if (day=="Thursday" || day=="Thu" or day=="thursday") thursday.push_back(value);
        else if (day=="Friday" || day=="Fri" or day=="friday") friday.push_back(value);
        else if (day=="Saturday" || day=="Sat" or day=="saturday") saturday.push_back(value);
        else if (day=="Sunday" || day=="Sun" or day=="sunday") sunday.push_back(value);
        else ++rejected;
    }

    cout << "Monday: ";
    print_vector(monday);
    cout << "Sum: " << sum_vector(monday) << endl;

    cout << "Tuesday: ";
    print_vector(tuesday);
    cout << "Sum: " << sum_vector(tuesday) << endl;

    cout << "Wednesday: ";
    print_vector(wednesday);
    cout << "Sum: " << sum_vector(wednesday) << endl;

    cout << "Thursday: ";
    print_vector(thursday);
    cout << "Sum: " << sum_vector(thursday) << endl;

    cout << "Friday: ";
    print_vector(friday);
    cout << "Sum: " << sum_vector(friday) << endl;

    cout << "Saturday: ";
    print_vector(saturday);
    cout << "Sum: " << sum_vector(saturday) << endl;

    cout << "Sunday: ";
    print_vector(sunday);
    cout << "Sum: " << sum_vector(sunday) << endl;

    cout << "Number of rejected values: " << rejected << endl;

    return 0;
}
