#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        char *str = new char[n];
        for(int i =0; i < n; i++){
            cin >> str[i];
        }
        int baloon = 2;
        int checked = 0;
        for(int i = 1; i < n; i++){
            for(int j =0; j<i; j++){
                if(str[i] == str[j]){
                    baloon ++;
                    checked = 1;
                    break;
                }

            }
            if(checked == 0){
                baloon += 2;
            }
            checked = 0;
        }
        cout << baloon << endl;
    }
}
