#include <iostream>
using namespace std;

// Function declaration
void greet();

// Function with parameters
int add(int a, int b);

// Default parameter
void message(string name = "User");

int main() {

    greet();

    cout << add(10, 20) << endl;

    message();
    message("Garv");

    return 0;
}

// Function definition
void greet() {
    cout << "Hello!" << endl;
}

int add(int a, int b) {
    return a + b;
}

void message(string name) {
    cout << "Welcome " << name << endl;
}