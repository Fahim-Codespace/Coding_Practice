#include <iostream>
using namespace std;

int main() {
    // Dynamic memory allocation for the arrays
    int* arr1 = new int[100];
    int* arr2 = new int[100];
    int* arr3 = new int[100];
    int size = 0;

    // Input elements into arr1
    while (cin >> arr1[size] && size < 100) {
        size++;
    }

    // Input elements into arr2 (assuming same size as arr1)
    for (int i = 0; i < size; i++) {
        cin >> arr2[i];
    }

    // Determine intersection of arr1 and arr2, store in arr3
    for (int i = 0; i < size; i++) {
        if (arr1[i] == 1 && arr2[i] == 1) {
            arr3[i] = 1;
        } else {
            arr3[i] = 0;
        }
    }

    // Display elements of arr3
    for (int i = 0; i < size; i++) {
        cout << arr3[i] << " ";
    }
    cout << endl;

    // Free dynamically allocated memory
    delete[] arr1;
    delete[] arr2;
    delete[] arr3;

    return 0;
}
