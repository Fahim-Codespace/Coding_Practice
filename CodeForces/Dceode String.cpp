#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;

        string res;

        for (int i = n - 1; i >= 0; ) {
        if (str[i] == '0') {
            int num = stoi(str.substr(i - 2, 2));
            res += char(num + 'a' - 1);
            i -= 3;
        } else {
            int num = str[i] - '0';
            res += char(num + 'a' - 1);
            i--;
        }
    }
    reverse(res.begin(),res.end());
    cout << res << endl;
    }
}
