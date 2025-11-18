#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int max = arr[0];
    for(int i = 1; i< n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    int count = 0;
    for(int i = 0; i< n; i++){
    count = count + (max - arr[i]);
    }
    cout << count << endl;

    delete[] arr;

    return 0;
}
