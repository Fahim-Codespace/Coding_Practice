#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int a, b, c, n;
        cin >> a >> b >> c >> n;

        int max;
        if(a >=b && a >=c){
            max = a;

        }
        else if(b > a && b > c){
            max = b;

        }
        else
            max = c;
        int x = ((max - a) + (max - b) + (max - c));

        if( n < x)
                cout << "No" << endl;
        else{

        if((n - x) % 3 == 0){
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    }
    return 0;
}
