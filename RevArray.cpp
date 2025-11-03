#include <iostream>
using namespace std;

int main() {
    int arr[10] = {2, 34, 6, 7, 2, 33, 43, 9, 23, 5};
    int revArr[10]; // new array for reversed values

    cout << "Original array values: ";
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }

    // Copy values in reverse order
    for (int i = 0; i < 10; i++) {
        revArr[i] = arr[9 - i];
    }

    cout << "\nReversed array values (stored in revArr): ";
    for (int i = 0; i < 10; i++) {
        cout << revArr[i] << " ";
    }

    cout << endl;
    return 0;
}
