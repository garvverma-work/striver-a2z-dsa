
#include <iostream>
using namespace std;

/*
========================
       OPERATORS
========================
*/

int main() {

    int a = 10, b = 3;

    /*
    ------------------------
      ARITHMETIC OPERATORS
    ------------------------
    */
    cout << "a + b = " << (a + b) << endl;
    cout << "a - b = " << (a - b) << endl;
    cout << "a * b = " << (a * b) << endl;
    cout << "a / b = " << (a / b) << endl;  // integer division
    cout << "a % b = " << (a % b) << endl;  // remainder

    /*
    ------------------------
      RELATIONAL OPERATORS
    ------------------------
    */

    cout << (a == b) << endl;
    cout << (a != b) << endl;
    cout << (a > b) << endl;
    cout << (a < b) << endl;

    /*
    ------------------------
      LOGICAL OPERATORS
    ------------------------
    */
    bool x = true;
    bool y = false;

    cout << (x && y) << endl; // AND
    cout << (x || y) << endl; // OR
    cout << (!x) << endl;     // NOT

    return 0;
}