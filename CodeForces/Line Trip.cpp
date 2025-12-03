#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);
#define endl '\n';
using namespace std;

int main() {
    long long t;
    cin>>t;
    while(t--){
    long long u,t,d,s;
    cin>>u>>t>>d>>s;

    long long rest=(s/d)*t;
    long long wo_rest=s/u;

    long long total=rest+wo_rest;

    cout<<total-5<<endl;
    }

}
