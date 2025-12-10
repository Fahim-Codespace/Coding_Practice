#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        int n;
        cin >> n;
        int A = 0, B = 0;

        // Calculate sum of first three digits (A)
        A += n % 10;
        n /= 10;
        A += n % 10;
        n /= 10;
        A += n % 10;

        // Move to the last three digits
        n /= 10;

        // Calculate sum of last three digits (B)
        B += n % 10;
        n /= 10;
        B += n % 10;
        n /= 10;
        B += n ;

        // Check if sums are equal
        if (A == B) {
            cout << "YES" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}
