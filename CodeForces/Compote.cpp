#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin >> a;
    cin >> b;
    cin >> c;

    a = a/1;
    b = b/2;
    c = c/4;

    if(a <= b && a <= c){
        cout << a * 7 << endl;
    }
    else if(b <= a && b <= c){
        cout << b * 7 << endl;
    }
    else
        cout << c * 7 << endl;

}
