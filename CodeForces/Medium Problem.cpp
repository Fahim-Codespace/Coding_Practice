#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        reverse(str.begin(),str.end());
        for (char &ch : str) {
            if (ch == 'p') {
                ch = 'q';
            } else if (ch == 'q') {
                ch = 'p';
            }
        }
        cout << str << endl;
    }
    return 0;
}
