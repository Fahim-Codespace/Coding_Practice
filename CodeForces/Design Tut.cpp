#include<iostream>
using namespace std;
int isPrime(int);
int main()
{
    int n;
    cin >> n;
    int A = n/2;
    int B = n - A;
    while(!(isPrime(A) == 0 && isPrime(B) == 0)){
        A ++;
        B --;
    }
    cout << A << ' ' << B << endl;
}

int isPrime(int n)
{
    for(int i = 2; i * i <= n; i++)
    {
        if(n % i == 0)
        {
            return 0;
            break;
        }
    }
    return 1;
}
