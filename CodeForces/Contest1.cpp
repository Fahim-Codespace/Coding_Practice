#include<iostream>
using namespace std;

int main(){
int t, n;
int arr[100];
cin >> t;
for (int i=0; i<t; i++){
cin >> n;

for(int i=0;i<n; i++ ){
    cin >> arr[i];
}
for(int i=0; i<n; i++){
    for (int j=i+1;j<n;j++){
        if(arr[i] > arr[j]){
            int x = arr[i];
            arr[i]= arr[j];
            arr[j]= x;
        }
    }
}
int sum = arr[1] - arr[0];
for(int i=1; i<n; i++){
    sum= sum + (arr[i+1]-arr[i]);

    }
    cout << sum << endl;
}
}
