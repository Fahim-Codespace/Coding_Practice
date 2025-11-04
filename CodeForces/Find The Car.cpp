#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
      int n, k, q;

      cin >> n >> k >> q;

      int a[k];
      int b[k];

      for (int i = 0; i<k; i++){
            cin >> a[k];
      }
       for (int i = 0; i<k; i++){
            cin >> b[k];
      }
      int d;
      for(int i = 0; i < q; i++){
        cin >> d;
        if(d <= a[0]){
            cout << d*(a[0]/b[0]) << endl;
        }
        if(d > a[0]){
            cout << b[0] + d*((a[1] - a[0])/(b[1]-b[0])) << endl;
        }
      }



    }
}
