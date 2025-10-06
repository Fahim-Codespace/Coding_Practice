#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);

    long long n, k;
    cin >> n >> k;
    string str;
    cin >> str;

    if (n == 1 && k == 1) {
        cout << 0 << endl;

    }
    else if(k == 0)
    {
        cout << str << endl;
    }
    else if(n != 1 && k == 1 && str[0]!='1'){
        str[0] = '1';
        cout << str << endl;
    }

    else if (str[0] != '1') {
        str[0] = '1';
        k--;
        for (int i = 1; i < n; i++) {
            if (str[i] == '0') continue;
            str[i] = '0';
            k--;
            if (k == 0) break;
        }
        cout << str << endl;
    } else {
        for (int i = 1; i < n; i++) {
            if (str[i] != '0') {
                str[i] = '0';
                k--;
            }
            if (k == 0) break;
        }
        cout << str << endl;
    }

    return 0;
}
