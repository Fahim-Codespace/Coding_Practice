#include<bits/stdc++.h>
#include<sstream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
    int n;
    cin >> n;
    cin.ignore();
    string input;
    vector<int> arr;

    getline(cin, input);

    stringstream ss(input);
    int num;
    while (ss >> num) {
        arr.push_back(num);
    }

    sort(arr.begin(),arr.end());
    arr[0] = arr[0] + 1;

    int res = 1;
    for(int i = 0; i < n; i++){
        res = res * arr[i];
    }
    cout << res << endl;
    }
}
