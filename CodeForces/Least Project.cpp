#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];

        int isZero = 0;
        int neg = 2;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            if(arr[i] < 0)
              neg++;
            if(arr[i] == 0){
                isZero = 1;
            }
        }

        if(neg % 2 != 0 || isZero == 1){
            cout << 0 << endl;
        }
        else{
        cout << 1 << endl;
        cout << 1 << " " << 0 << endl;
        }
    }
}
