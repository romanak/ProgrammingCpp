// Drill: write a letter to a friend

#include "../std_lib_facilities.h"

int main() {
    string first_name;
    cout << "Enter the name of the person you want to write to: ";
    cin >> first_name ; // read first name
    cout << "Dear " << first_name << ",\n";
    cout << "   How are you? I miss you. It's been a long time we last talked. I hope\n";
    cout << "you are well. How is your family doing?\n";

    string friend_name;
    cout << "Enter the name of another friend: ";
    cin >> friend_name; // read friend name
    cout << "Have you seen " << friend_name << " lately?\n";

    char friend_sex = 0;
    cout << "Enter 'm' if the friend is male and 'f' if the friend is female: ";
    cin >> friend_sex;
    if (friend_sex == 'm')
        cout << "If you see " << friend_name << " please ask him to call me.\n";
    if (friend_sex == 'f')
        cout << "If you see " << friend_name << " please ask her to call me.\n";

    int age;
    cout << "Enter the age of the recipient: ";
    cin >> age;
    cout << "I hear you just had a birthday and you are " << age << " years old.\n";
    if ((age <= 0) or (age >= 110))
        error("you are kidding!");

    if (age < 12)
        cout << "Next year you will be " << age+1 << " years old.\n";
    if (age == 17)
        cout << "Next year you will be able to vote.\n";
    if (age > 70)
        cout << "I hope you are enjoying retirement.\n";

    cout << "Yours sincerely,\n\n\n";
    cout << "Roman Akchurin\n";

    return 0;
}
