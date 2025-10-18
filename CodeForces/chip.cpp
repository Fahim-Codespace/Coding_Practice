#include <iostream>
using namespace std;

int func(int arr[], int n) {
    int count = 0;
    int a = -1;

    for (int i = 0; i < n; ++i) {
        if (arr[i] == 1) {
            if (a != -1) {
                int distance = i - a - 1;
                if (distance > count) {
                    count = distance;
                }
            }
            a = i;
        }
    }
    return count;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int arr[100];

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int count = func(arr, n);
        cout << count << endl;
    }

    return 0;
}
