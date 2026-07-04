#include <iostream>
using namespace std;

/*
========================
    INPUT / OUTPUT
========================
*/

int main() {

    string name;
    int age;

    cout << "Enter your name: ";
    cin >> name;   // takes single word input

    cout << "Enter your age: ";
    cin >> age;

    cout << "\n--- OUTPUT ---" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;

    /*
        NOTE:
        cin >> only reads until space.
        For full line input, use getline(cin, name);
    */

    return 0;
}