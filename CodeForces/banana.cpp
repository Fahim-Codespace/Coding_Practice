#include<iostream>
using namespace std;
int main(){
int n,w,k;
cin >> k >> n >> w;
int sum=0;
for(int i=1; i<=w; i++){
    sum = sum + i;
}
k = k*sum;
if(k>=n){
    cout << k-n << endl;
}
else
    cout << 0 << endl;
}
