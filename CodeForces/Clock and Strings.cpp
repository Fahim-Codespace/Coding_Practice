#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a,b,c,d;
        cin >> a >> b >> c >> d;

        if(a < b){
                int temp = a;
                a = b;
                b = temp;
        }

            if((c==a && b == d)||(c==b && d == a)){
               cout << "Yes" << endl;
               break;
               }
            else if((c <= a && c >= b) && (d <= a && d >= b)){
                    cout << "No" << endl;
                    }
            else if((c >= a || c <= b) && (d >= a || d <= b)){
                cout << "No" << endl;
            }
            else{
                cout << "Yes" << endl;
            }

    }
}
