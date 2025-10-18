#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin >> t;
while(t--)
{
    int n, f, k;
        cin >> n >> f >> k;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        int temp = a[f-1];
        sort(a.rbegin(),a.rend());

        if(a[k-1] > temp)
            cout << "NO" << endl;
        else if(a[k-1] < temp)
            cout << "YES" << endl;
        else{
            if( k != n && a[k-1] == a[k]){
                cout << "MAYBE" << endl;
            }
            else
                cout << "YES" << endl;
        }


}

}
