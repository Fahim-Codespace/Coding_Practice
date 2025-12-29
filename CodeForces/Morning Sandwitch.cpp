#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int b, c, h;
        cin >> b >> c >> h;
        if(b == 2 && (c > 0 || h >0)){
            cout << 3 <<endl;
        }
        else if( b < 2){
            cout << 0 << endl;
        }
        else{
            if(b-2 >= c+h){
                cout << 2 + (c+h) + (c + h - 1) << endl ;
            }
            else
                cout << 2 + (b-2) + (b-2+1) << endl;
        }

    }

}
