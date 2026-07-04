#include <iostream>
using namespace std;

/*
========================
    INPUT / OUTPUT
========================
*/

int main() {

    // string name;
    // int age;

    // cout << "Enter your name: ";
    // cin >> name;   // takes single word input

    // cout << "Enter your age: ";
    // cin >> age;

    // cout << "\n--- OUTPUT ---" << endl;
    // cout << "Name: " << name << endl;
    // cout << "Age: " << age << endl;

    /*
        NOTE:
        cin >> only reads until space.
        For full line input, use getline(cin, name);
    */

    // getline()
    string name1;
    cout << "Enter full name: ";
    getline(cin, name1);
    cout << name1 << endl;

    // Escape Sequences
    cout << "Hello\nWorld" << endl;
    cout << "Tab\tSpace" << endl;
    cout << "Quote: \"C++\"" << endl;

    return 0;
}