#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char arr[201];
    int arr1[201];
    cin.getline(arr, 201);

    int len = strlen(arr);
    int j = 0;
    for(int i = 0; i < len; i++){
        if((arr[i] == '.' && arr[i - 1] != '-') || (arr[i] == '.' && arr[i - 1] == '-' && arr[i-2] == '-') ){
            arr1[j] = 0;
            j++;
        }
        else if(arr[i] == '-' && arr[i + 1] == '.'){
            arr1[j] = 1;
            j++;
            i++;
        }
        else if(arr[i] == '-' && arr[i + 1] == '-'){
            arr1[j] = 2;
            j++;
            i++;
        }
    }
    int size_arr1 = j ;

    for(int i = 0; i < size_arr1; i++){
        cout << arr1[i];

    }
    return 0;
}
