#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string countdown;
        cin >> countdown;

        long long total_time = 0; // Using long long to handle potential large numbers

        for (int i = 0; i < n; ++i) {
            total_time += countdown[i] - '0';
        }

        total_time += n - 1; // Add (n-1) seconds for the transitions between digits

        cout << total_time << endl;
    }

    return 0;
}
