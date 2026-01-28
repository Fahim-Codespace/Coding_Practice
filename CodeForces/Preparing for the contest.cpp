#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        int order[n];
        for (int i = 0; i < n; i++) {
            order[i] = n - i;
        }
        sort(order,order + k + 1);



        for (int i = 0; i < n; ++i) {
            cout << order[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
