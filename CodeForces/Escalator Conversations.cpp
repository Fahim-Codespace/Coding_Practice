#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m, k, H;
        cin >> n >> m >> k >> H;

        vector<int> h(n);
        for (int i = 0; i < n; ++i) {
            cin >> h[i];
        }

        int count = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = 1; j <= m; ++j) {
                int height_difference = abs(h[i] - (j * k));
                if (height_difference % k == 0 && height_difference / k <= H / k && height_difference > 0) {
                    // Person i can have a conversation with Vlad on step j
                    ++count;
                    break; // No need to check other steps for this person
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}
