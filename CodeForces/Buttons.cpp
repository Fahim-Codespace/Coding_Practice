#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >>t;
    while(t--)
    {
        int a,b,c;
        cin >> a >> b >> c;

        b = b + (c/2);
        if(c % 2 != 0){
            a = a + (c/2) + 1;
        }
        else{
            a = a + (c/2);
        }

        if (a > b)
            cout << "First" << endl;
        else
            cout << "Second" << endl;

    }
    return 0;
}
