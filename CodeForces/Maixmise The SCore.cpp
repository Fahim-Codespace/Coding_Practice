#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(2 * n);
        for (int i = 0; i < 2 * n; i++) {
            cin >> arr[i];
        }

        sort(arr.rbegin(), arr.rend());
        int score = 0;
        for (int i = 1; i < 2 * n; i++) {
            if (i % 2 == 0)
                continue;
            else
                score += arr[i];
        }


        cout << score << endl;
    }
    return 0;
}
