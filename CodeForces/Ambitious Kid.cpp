#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for(int i =0; i < n; i++){
        cin >> arr[i];
        if(arr[i] < 0)
            arr[i] = -arr[i];
    }

    sort(arr, arr + n);

    cout << arr[0] << endl;

    delete[] arr;
    return 0;
}
