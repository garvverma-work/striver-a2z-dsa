#include <iostream>
#include <string>
using namespace std;

int main() {

    // String declaration
    string str = "Hello";

    // Accessing characters
    cout << str[0] << endl;

    // Length
    cout << str.length() << endl;

    // Empty
    cout << str.empty() << endl;

    // Append
    str.append(" World");
    cout << str << endl;

    // Push back
    str.push_back('!');
    cout << str << endl;

    // Pop back
    str.pop_back();
    cout << str << endl;

    // Insert
    str.insert(5, ",");
    cout << str << endl;

    // Erase
    str.erase(5, 1);
    cout << str << endl;

    // Find
    cout << str.find("World") << endl;

    // Substring
    cout << str.substr(6, 5) << endl;

    // Replace
    str.replace(6, 5, "Everyone");
    cout << str << endl;

    // Clear
    str.clear();
    cout << str.empty() << endl;

    return 0;
}