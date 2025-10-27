#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;

        int colors = ((n + k - 1) / k) * ((m + k - 1) / k);

        cout << colors << endl;
    }

    return 0;
}
