#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s, r, x;
        cin >> s;
        r = s;
        sort(r.begin(), r.end());
        x = r;

        if (s == x) {
            sort(x.rbegin(),x.rend());
            if(s==x)
            cout << "No" << endl;
            else{
            cout << "Yes" << endl;
            cout << x << endl;
            }

        }
        else {
            cout << "Yes" << endl;
            cout << r << endl;
        }
    }

    return 0;
}
