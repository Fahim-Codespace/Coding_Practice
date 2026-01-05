#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int res = 0;
    char z = 'a';
    for(int i = 0; i < s.size(); i++){
       int x = abs(s[i] - z);
       int y = 26 - x;
       res += min(x, y);
       z = s[i];
    }
    cout << res << endl;
    return 0;
}
