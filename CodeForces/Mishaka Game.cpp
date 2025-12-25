#include<iostream>
using namespace std;

int main()
{
    int r;
    int m=0;
    int c=0;
    cin >> r;
    while(r--){
        int M, C;

        cin >> M >> C;
        if( M > C)
            m++;
        else if(C>M)
            c++;
    }
    if(m > c){
        cout << "Mishka" << endl;

    }
    else if(c > m)
        cout << "Chris" << endl;
    else if(c == m)
        cout << "Friendship is magic!^^" << endl;
}
