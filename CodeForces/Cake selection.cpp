#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main()
{
    int N,M;
    cin >> N >> M;
    int *arrX = new int[N];
    int *arrY = new int[N];
    int *arrZ = new int[N];

    for(int i = 0; i < N; i++){
        cin >> arrX[i] >> arrY[i] >> arrZ[i];

    }
    int *arr = new int[N];
    for(int i = 0; i < N; i++){
        arr[i] = arrX[i] + arrY[i] + arrZ[i];
        if(arr[i] < 0)
            arr[i] = -arr[i];
    }

    sort(arr, arr + N, greater<int>());
    int x =0;
    for(int i =0; i < M; i++){
        x = x + arr[i];
    }

    cout << x << endl;



    return 0;

}
