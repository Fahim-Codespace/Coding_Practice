#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, t;

    cin >> n >> k >> t;

    if(t <= k && t < n){
        cout << t << endl;
    }

    else if(t >= k && t <= n){
        cout << k << endl;
    }

    else if(t >= k && t >= n){
         int x = k - (t - n);
    if(x < 0){cout << 0 << endl;}
    else
        cout << x << endl;
    }
}
