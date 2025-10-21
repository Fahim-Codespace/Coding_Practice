#include<iostream>
using namespace std;

int main()
{
    int r;

    cin >> r;
    while(r--){
            char str[] = {"codeforces"};
            char c;
            int a = 0;
            cin >> c;
            for (int i = 0; i < 10; i++){
                if(str[i] == c){
                    a = 1;
                    break;
                }

            }
            if(a == 1){
                cout << "YES" << endl;
            }
            if(a == 0){
                cout << "NO" << endl;
            }
    }
}
