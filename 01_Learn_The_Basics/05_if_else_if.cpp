#include <iostream>
using namespace std;

int main() {

    int x = 10;

    // if statement
    if (x > 0) {
        cout << "Positive" << endl;
    }

    // if-else
    if (x % 2 == 0) {
        cout << "Even" << endl;
    } else {
        cout << "Odd" << endl;
    }

    // else-if ladder
    if (x > 0) {
        cout << "Greater than 0" << endl;
    } else if (x == 0) {
        cout << "Zero" << endl;
    } else {
        cout << "Less than 0" << endl;
    }

    // nested if
    int age = 20;

    if (age >= 18) {
        if (age >= 60) {
            cout << "Senior" << endl;
        } else {
            cout << "Adult" << endl;
        }
    } else {
        cout << "Minor" << endl;
    }

    return 0;
}