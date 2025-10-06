#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int N;
        cin >> N;
        vector<int> v(N);
        for(int i = 0; i < N; i++)
        {
            cin >> v[i];
        }
        int count  = 1;
        for(int i = 1; i < N; i++ )
        {
            if(v[i] % 2 != v[i - 1]%2)
            {
                count++;
            }
        }
        if(N == 1)
        {
            cout << "1" << endl;
        }
        else{
        cout << count << endl;
        }
    }
    return 0;
}