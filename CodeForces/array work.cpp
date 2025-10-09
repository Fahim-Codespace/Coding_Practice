#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int arr[50];
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        sort(arr, arr + n);

        int newSize = 0;
        for (int i = 0; i < n - 1; i++) {
            if (abs(arr[i] - arr[i + 1]) <= 1) {
                arr[i] = -1;
            } else {
                arr[newSize++] = arr[i];
            }
        }
        arr[newSize++] = arr[n - 1];

        if(newSize == 1) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
