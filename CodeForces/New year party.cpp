#include<iostream>
using namespace std;

int main(){
int n, k;
cin >> n >> k ;

int time = 0;
int count = 0;
int t = 240 - k;
for (int i = 1; (time <= t) && (i <= n); i++){
    time = time + (5 * i);
    if(time <= t){
    count ++;
    }
}
cout << count << endl;
return 0;

}
