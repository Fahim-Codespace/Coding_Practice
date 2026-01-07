#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int arr1[n], arr2[m];
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> arr2[i];
    }
    int count = 0;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n-1; j++) {
            if ((arr2[i] + arr1[j]) % 2 == 1) {
                count++;
                for (int k = j; k < n ; k++) {
                    arr1[k] = arr1[k + 1];
                }
                n--; // Decrease the size of arr1 after shifting
                j--; // Adjust the index for the next iteration
                i++;
            }

        }
    }
    cout << count << endl;
}
