#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int k = -1;
        for (int i = 0; i < n; i++) {
            if (s[i] == 'A') {
                k = i;
                break;
            }
        }

        if (k == -1) {
            cout << "0" << endl;
            continue;
        }

        int maxCount = 0, count = 0;
        for (int i = k + 1; i < n; i++) {
            if (s[i] == 'P') {
                count++;
                maxCount = max(maxCount, count);
            } else {
                count = 0;
            }
        }

        cout << maxCount << endl;
    }

    return 0;
}
