#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<vector<int>> arr(n, vector<int>(n));
    vector<int> row(n, 0);
    vector<int> col(n, 0);

    int sum = 0;
    int win = 0;

    // Input matrix elements and calculate row sums
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
            row[i] += arr[i][j];
        }
    }

    // Calculate column sums
    for (int j = 0; j < n; j++) {
        sum = 0; // Reset sum for each column
        for (int i = 0; i < n; i++) {
            sum += arr[i][j];
        }
        col[j] = sum;
    }

    // Compare sums to determine winner
    for (int i = 0; i < n; i++) {
        if (col[i] > row[i]) {
            win++;
        }
    }

    cout << win << endl;
    return 0;
}
