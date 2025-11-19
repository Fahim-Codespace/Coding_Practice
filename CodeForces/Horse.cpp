#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n';
using namespace std;

int main() {
    optimize();
    int N, M, L, R, cnt = 0;
    cin >> N >> M >> L >> R;
    vector<int> v1(N);
    vector<int> v2(M);
    for (int i = 0; i < N; i++) {
        cin >> v1[i];
    }
    for (int i = 0; i < M; i++) {
        cin >> v2[i];
    }

    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());

    int left = 0, right = M - 1;

    while (left < N && right >= 0) {
        int sum = v1[left] + v2[right];
        if (sum >= L && sum <= R) {
            cnt += right + 1;
            left++;
        } else if (sum < L) {
            left++;
        } else {
            right--;
        }
    }

    cout << cnt << endl;
    return 0;
}
