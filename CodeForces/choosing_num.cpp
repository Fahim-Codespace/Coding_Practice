#include <iostream>
using namespace std;

int main() {
    const int MAX_SIZE = 100;
    int n, m;
    int A[MAX_SIZE], B[MAX_SIZE];

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> B[i];
    }

    int found = 0;
    for (int i = 0; i < n && !found; i++) {
        for (int j = 0; j < m && !found; j++) {
            int sum = A[i] + B[j];
            int exists_in_A = 0, exists_in_B = 0;
            for (int k = 0; k < n; k++) {
                if (A[k] == sum) {
                    exists_in_A = 1;
                    break;
                }
            }
            for (int k = 0; k < m; k++) {
                if (B[k] == sum) {
                    exists_in_B = 1;
                    break;
                }
            }
            if (!exists_in_A && !exists_in_B) {
                cout << A[i] << " " << B[j] << endl;
                found = 1;
            }
        }
    }

    return 0;
}

