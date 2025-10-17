#include<iostream>
using namespace std;

int main(){
char str[1000];
cin.getline(str, 1000);
if(str[0] >= 'a' && str[0] <= 'z'){
    str[0] -= 32;
}
cout << str << endl;
}
