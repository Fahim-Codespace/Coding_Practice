#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        int *arr = new int[n];
        long long sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            sum += arr[i];
        }

        long long number = sqrt(sum);
        if (number * number == sum) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }

        delete[] arr;
    }

    return 0;
}
