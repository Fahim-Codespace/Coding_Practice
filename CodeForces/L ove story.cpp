#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        char arr1[10]={'c', 'o', 'd', 'e', 'f', 'o', 'r', 'c', 'e', 's'};
        char arr2[10];
        int count = 0;

        for(int i=0; i<10; i++){
            cin >> arr2[i];
        }

         for(int i=0; i<10; i++){
         if(arr1[i] != arr2[i]){
            count++;
         }
         }

         cout << count << endl;
    }
}
