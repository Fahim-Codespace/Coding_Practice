#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;


        int k = ceil(y / 2.0);


        int l = (15 * k) - (4 * y);


        if (y == 0) {
            cout << ceil(x / 15.0) << endl;
        }

        else if (x <= l) {
            cout << k << endl;
        }

        else {
            int m = ceil((x - l) / 15.0);
            cout << k + m << endl;
        }
    }
    return 0;
}
