#include<bits/stdc++.h>
using namespace std;

int main()
{
    int l, r, a;
    cin >> l >> r >> a;
    int max,min;
    if(l >= r){
        max = l;
        min = r;
    }
    else{
        max = r;
        min = l;
    }

    if(a == (max - min)){
        cout << 2 * max << endl;
    }
    else if(a <(max - min)){
        cout << 2*(min + a) << endl;
    }
    else
        cout << max*2 + 2*((a - (max - min))/2) << endl;

    return 0;

}
