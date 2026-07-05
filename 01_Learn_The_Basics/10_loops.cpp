#include <iostream>
using namespace std;

int main() {

    // for loop
    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
    }
    cout << endl;

    // while loop
    int i = 1;

    while (i <= 5) {
        cout << i << " ";
        i++;
    }
    cout << endl;

    // do-while loop
    int j = 1;

    do {
        cout << j << " ";
        j++;
    } while (j <= 5);

    cout << endl;

    // break
    for (int k = 1; k <= 5; k++) {
        if (k == 3) {
            break;
        }
        cout << k << " ";
    }
    cout << endl;

    // continue
    for (int k = 1; k <= 5; k++) {
        if (k == 3) {
            continue;
        }
        cout << k << " ";
    }
    cout << endl;

    // nested loop
    for (int row = 1; row <= 2; row++) {
        for (int col = 1; col <= 3; col++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}