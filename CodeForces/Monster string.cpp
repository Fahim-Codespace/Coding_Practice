#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main() {
    ios_base::sync_with_stdio(0);

        ll N, M, L, R;
        cin >> N >> M >> L >> R;
        vector<ll> v1(N), v2(M);

        for(int i = 0; i < N; i++) {
            cin >> v1[i];
        }
        for(int i = 0; i < M; i++) {
            cin >> v2[i];
        }
        sort(v2.begin(), v2.end());

        ll ans = 0;

        for(int i = 0; i < N; i++) {
            ll temp = v1[i];
            ll min = lower_bound(v2.begin(), v2.end(), L - temp) - v2.begin();
            ll max = upper_bound(v2.begin(), v2.end(), R - temp) - v2.begin();

            ans += (max - min);
        }
        cout << ans << endl;
}
