#include <iostream>
using namespace std;

/*
========================
      DATATYPES
========================
*/

int main() {

    /*
    Primitive Datatypes in C++
    ---------------------------
    int     -> whole numbers
    float   -> decimal (6-7 digits precision)
    double  -> decimal (15+ digits precision)
    char    -> single character
    bool    -> true/false
    */

    int a = 10;
    float b = 2.5f;
    double c = 3.1415926535;
    char d = 'X';
    bool e = true;

    cout << "int: " << a << endl;
    cout << "float: " << b << endl;
    cout << "double: " << c << endl;
    cout << "char: " << d << endl;
    cout << "bool: " << e << endl;

    // Size of Data Types
    cout << sizeof(int) << endl;
    cout << sizeof(float) << endl;
    cout << sizeof(char) << endl;
    cout << sizeof(bool) << endl;

    // Type Conversion (implicit)
    int p = 10;
    float q = p;
    cout << q << endl;

    // Type Casting (explicit)
    float m = 9.7;
    int n = (int)m;

    cout << n << endl;

    // Example
    int i = 5;
    int j = 2;

    cout << i / j << endl;      // int division
    cout << (float)i / j << endl;

    return 0;
}