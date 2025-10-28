#include<iostream>
using namespace std;

int main(){
int m,n,t;
cin >> t;
for(int i=0; i<t; i++){
    cin >> m >> n;
    if(m%n != 0){
    cout << (n-(m%n)) << endl;
    }
    else cout << 0 << endl;
}

}
