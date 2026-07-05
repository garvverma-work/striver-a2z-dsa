#include <iostream>
using namespace std;

int main() {

    // Array declaration
    int arr[5];

    // Initialization
    int nums[5] = {10, 20, 30, 40, 50};

    // Accessing elements
    cout << nums[0] << endl;
    cout << nums[2] << endl;

    // Updating an element
    nums[1] = 25;
    cout << nums[1] << endl;

    // Size of array
    int size = sizeof(nums) / sizeof(nums[0]);
    cout << size << endl;

    // Traversing an array
    for (int i = 0; i < size; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    // Example: Sum of elements
    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += nums[i];
    }

    cout << sum << endl;

    return 0;
}