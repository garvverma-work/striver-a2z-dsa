#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter a number :";
    cin >> n;

    // Pattern 1: Solid square
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << "*";
        }
        cout << endl;
    }

    // Pattern 2: Right triangle (stars)
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i+1; j++){
            cout << "*";
        }
        cout << endl;
    }

    // Pattern 3: Number triangle (1..i)
    for(int i = 0; i < n; i++){
        for(int j = 1; j <= i+1; j++){
            cout << j;
        }
        cout << endl;
    }

    // Pattern 4: Repeated row number
    for(int i = 1; i <= n; i++){
        for(int j = 1; j < i+1; j++){
            cout << i;
        }
        cout << endl;
    }

    // Pattern 5: Inverted right triangle (stars)
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - i ; j++){
            cout << "*";
        }
        cout << endl;
    }

    // Pattern 6: Inverted number triangle
    for(int i = 0; i < n; i++){
        for(int j = 1; j <= n - i ; j++){
            cout << j;
        }
        cout << endl;
    }

    // Pattern 7: Pyramid (stars)
    for(int i = 0; i < n; i++){
        for(int j = 0; j < (n - i - 1); j++){
            cout << " ";
        }
        for(int j = 0; j < (2 * i + 1); j++){
            cout << "*";
        }
        for(int j = 0; j < (n - i - 1); j++){
            cout << " ";
        }
        cout << endl;
    }

    // Pattern 8: Inverted pyramid (stars)
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){
            cout << " ";
        }
        for(int j = 0; j < (2 * n) - (2 * i + 1); j++){
            cout << "*";
        }
        for(int j = 0; j < i; j++){
            cout << " ";
        }
        cout << endl;
    }

    // Pattern 9: Right triangle + inverted triangle (diamond half)
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i+1; j++){
            cout << "*";
        }
        cout << endl;
    }
    for(int i = 1; i < n; i++){
        for(int j = 0; j < n - i ; j++){
            cout << "*";
        }
        cout << endl;
    }

        // Pattern 10: Butterfly pattern (stars + spaces + stars)
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - i; j++){
            cout << "*";
        }
        for(int j = 0; j < i * 2; j++){
            cout << " ";
        }
        for(int j = 0; j < n - i; j++){
            cout << "*";
        }
        cout << endl;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i +1; j++){
            cout << "*";
        }
        for(int j = 0; j < (2 * n) - (2 * i + 2); j++){
            cout << " ";
        }
        for(int j = 0; j < i + 1; j++){
            cout << "*";
        }
        cout << endl;
    }

    // Pattern 11: Alternating 0-1 triangle
    for(int i = 0; i < n; i++){

        int start = (i % 2 == 0) ? 1 : 0;

        for(int j = 0; j <= i; j++){
            cout << start << " ";
            start = 1 - start;
        }
        cout << endl;
    }

    // Pattern 12: Increasing number triangle (continuous)
    int num = 1;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++ ){
            cout << num << " ";
            num += 1;
        }
        cout << endl;
    }

    // Pattern 13: Palindromic number triangle
    for(int i = 1; i <= n - 1; i++){
        for(int j = 1; j <= i; j++){
            cout << j;
        }
        for(int j = 1; j <= (2 * n) - (2 * i + 2); j++){
            cout << " ";
        }
        for(int j = i; j >= 1; j--){
            cout << j;
        }
        cout << endl;
    }

    // Pattern 14: Alphabet triangle (A to ...)
    for(int i = 0; i < n; i++){
        for(char ch = 'A'; ch <= 'A' + i; ch++){
            cout << ch;
        }
        cout << endl;
    }

    // Pattern 15: Repeated letters triangle
    char ch2 = 'A';

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << ch2;
        }
        ch2 += 1;
        cout << endl;
    }

    // Pattern 16: Reverse alphabet triangle
    for(int i = 0; i < n; i++){
        for(char ch = 'A'; ch <= 'A' + (n - i - 1); ch++){
            cout << ch;
        }
        cout << endl;
    }

    // Pattern 17: Palindromic alphabet pyramid
    for(int i = 0; i < n; i++){
        for(int j = 1; j <= n - i - 1; j++){
            cout << " ";
        }
        char ch = 'A';
        int breakpoint = (2 * i + 1) / 2;
        for(int j = 1; j <= (2 * i + 1); j++){
            cout << ch;
            if(j <= breakpoint){
                ch++;
            } else{
                ch--;
            }
        }
        for(int j = 1; j <= n - i - 1; j++){
            cout << " ";
        }
        cout << endl;
    }

    // Pattern 18: Reverse alphabet staircase (E to ...)
    for(int i = 0; i < n; i++){
        for(char ch = 'E' - i; ch <= 'E'; ch++){
            cout << ch;
        }
        cout << endl;
    }

    // Pattern 19: Hollow square
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == 0 || j == n - 1 || j == 0 || i == n - 1){
                cout << "*";
            } else{
                cout << " ";
            }
        }
        cout << endl;
    }

    // Pattern 20: Concentric number square
    for(int i = 0; i < (2 * n - 1); i++){
        for(int j = 0; j < (2 * n - 1); j++){
            int top = i;
            int left = j;
            int right = 2 * n - 2 - j;
            int bottom = 2 * n - 2 - i;

            cout << (n - min(min(top, bottom), min(left, right)));
        }
        cout << endl;
    }

    return 0;
}



