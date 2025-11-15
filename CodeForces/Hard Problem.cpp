#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long m, a, b, c;
        cin >> m >> a >> b >> c;

        long long row1 = min(a, m);
        long long row2 = min(b, m);

        long long x = m - row1;
        long long y = m - row2;

        long long z = min(c, x + y);

        long long total = row1 + row2 + z;

        cout << total << endl;
    }
    return 0;
}
