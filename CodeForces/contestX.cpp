#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main() {
    string n;
    cin >> n;

    sort(n.begin(), n.end());

    int count = 1;
    for (int i = 1; i <= n.length(); i++) {
        count *= i;
    }

    cout << count << endl;
    cout << n << endl;


    while (next_permutation(n.begin(), n.end())) {
        cout << n << endl;
    }

    return 0;
}
