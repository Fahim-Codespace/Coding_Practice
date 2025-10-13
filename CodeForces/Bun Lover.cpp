#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        long long sum = (2LL*((n-2LL) * (n-1LL))/2LL - 2LL);

        long long res = 3LL + sum + (n-1LL) + 4LL*n;

        cout << res << endl;
    }
    return 0;
}
