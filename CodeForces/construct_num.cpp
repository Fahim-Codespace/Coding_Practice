#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;

    bool found = false;
    for (int a = 1; a <= x; a++) {
        for (int b = 1; b <= x; b++) {
            if (a % b == 0 && a * b > x && a / b < x) {
                cout << a << " " << b << endl;
                found = true;
                return 0;
            }
        }
    }

    if (!found) {
        cout << -1 << endl;
    }

    return 0;
}
