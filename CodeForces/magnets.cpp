#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int groups = 0;
    int *arr = new int[2 * n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] != arr[i + 1]) {
            groups++;
        }
    }

    cout << groups + 1 << endl;
    delete[] arr;
    return 0;
}
