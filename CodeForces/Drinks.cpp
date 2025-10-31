#include<iostream>
#include<cstring>
using namespace std;

int main(){
float n;
int arr[100];
float sum=0;
float res;
cin >> n;
for(int i=0;i<n;i++){
   cin >> arr[i];
   sum = sum + arr[i];
}
res = sum/n;
cout << res << endl;


}
