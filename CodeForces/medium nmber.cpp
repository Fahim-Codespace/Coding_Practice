#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
    int a, b, c;
    cin >> a >> b >> c;
    if(a >= b && a >= c){
        if(b >= c)
            cout << b << endl;
        else
            cout << c << endl;
    }
    else if(b >= c && b >= a){
        if(a >= c)
            cout << a << endl;
        else
            cout << c << endl;
    }
     else if(c >= a && c >= b){
        if(b >= a)
            cout << b << endl;
        else
            cout << a << endl;
    }
    }
}
