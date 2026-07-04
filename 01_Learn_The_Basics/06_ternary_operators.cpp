#include <iostream>
using namespace std;

int main() {

    int a = 10, b = 20;

    // Syntax
    int max = (a > b) ? a : b;
    cout << max << endl;

    // Replacing simple if-else
    int num = 7;
    (num % 2 == 0) ? cout << "Even" << endl : cout << "Odd" << endl;

    // Nested ternary
    int x = 15;

    string result = (x > 0) ? "Positive" : (x < 0) ? "Negative" : "Zero";
    cout << result << endl;

    return 0;
}