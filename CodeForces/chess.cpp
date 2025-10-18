#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();
    char* str = new char[n + 1];
    cin.getline(str, n + 1);

    int A = 0;
    for (int i = 0; i < n; i++) {
        if (str[i] == 'A') {
            A++;
        }
    }

    if (A > n / 2) {
        cout << "Anton" << endl;
    } else if (A == (n - A)) {
        cout << "Friendship" << endl;
    } else {
        cout << "Danik" << endl;
    }

    return 0;
}
