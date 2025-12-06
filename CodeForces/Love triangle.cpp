#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   cin >> n;
   int arr[n + 1];

   for(int i = 1; i <= n; i++){
    cin >> arr[i];
   }
   for(int i = 1; i <= n; i++){
    int x = arr[i];
    int y = arr[x];
    if(arr[y] == i){
        cout << "YES" << endl;

    return 0;
    }
   }
   cout << "NO" << endl;

}
