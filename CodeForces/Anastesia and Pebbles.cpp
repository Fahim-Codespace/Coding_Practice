#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    cin >> n >> k;

    int arr[n];
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }

    int y = 0;
    for(int i = 0; i<n; i++){
        if(arr[i] % k != 0){
        y += (arr[i] / k ) + 1;
        }
        else
            y += arr[i]/k;
    }

    if(y % 2 != 0){
        cout << (y + 1)/2 << endl;
    }

    else
        cout << y/2 << endl;


    return 0;
}
