#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int arr[n];
        int neg = 0;
        int y = 0;

        for(int i = 0; i < n; i++) {
            cin >> arr[i];
            if(arr[i] < 0)
                neg++;

            if(arr[i] != 0)
                arr[y++] = arr[i];
        }

        for(int i = 0; i < y - 1; i++) {
            if(arr[i] < 0 && arr[i + 1] < 0)
                neg--;
        }

        long long sum = 0;
        for(int i = 0; i < y; i++) {
            sum += abs(arr[i]);
        }

        cout << sum << " " << neg << endl;
    }

    return 0;
}
