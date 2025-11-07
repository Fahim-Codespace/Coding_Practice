#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b;
    cin >> a;
    cin >> b;

    int x = a - b;
    if(x < 0){
      x = -1 * x;
    }

    int count = 0;

    if(x % 2 == 0){
        for(int i =1; i <= x/2; i++){
            count = count + i;
        }
        cout << 2*count << endl;
    }
    else{
        for(int i =1; i <= x/2; i++){
            count = count + i;
        }
        cout << 2*count + (x/2 + 1) << endl;
    }
}
