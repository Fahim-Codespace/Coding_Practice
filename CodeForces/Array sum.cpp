#include<iostream>
using namespace std;
int main(){
int t;
cin >> t;
for (int i = 0; i < t; i++){
    int n;
    cin >> n;
    int count = 0;
    int arr[51];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++){
        if(arr[i] < 0){
            arr[i] = (-1) * arr[i];
        }
    }
    for (int i = 0; i < n; i++){
        count = count + arr[i];
    }
    cout << count << endl;

}

return 0;
}
