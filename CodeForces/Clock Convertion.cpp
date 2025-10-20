#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
      int a, b;
      char c;

      cin >> a >> c >> b;
      if(a == 0 && b < 10){

        cout << 12 << ":" << 0 << b << " " << "AM" << endl;
      }
      else if(a == 0 && b >= 10){
        cout << 12 << ":" << b << " " << "AM" << endl;
      }
      else{

      if( a < 12){
        if(a >= 10 && b >=10)
        cout << a << ":" << b << " " << "AM" << endl;
        else if(a < 10 && b >=10)
         cout << 0 << a << ":" << b << " " << "AM" << endl;
        else if(a >=10 && b < 10)
         cout << a << ":" << 0 << b << " " << "AM" << endl;
        else if(a < 10 && b <10)
          cout << 0 << a << ":" << 0 << b << " " << "AM" << endl;
      }
      else if(a == 12){
        if(a == 12 && b < 10){
        cout << 12 << ":" << 0 << b << " " << "PM" << endl;
        }
        else if(a == 12 && b >= 10){
        cout << 12 << ":" << b << " " << "PM" << endl;
      }
      }
      else
        if(b >= 10 && (a - 12) >= 10)
        cout << a - 12 << ":" << b << " " << "PM" << endl;
        else if(b < 10 && (a -12) >= 10)
        cout << a - 12 << ":" << 0 << b << " " << "PM" << endl;
        else if(b >= 10 && (a -12) < 10)
        cout << 0 << a - 12 << ":" << b << " " << "PM" << endl;
        else if(b < 10 && (a -12) < 10)
        cout << 0 << a - 12 << ":" << 0 << b << " " << "PM" << endl;


      }
    }
    return 0;

}
