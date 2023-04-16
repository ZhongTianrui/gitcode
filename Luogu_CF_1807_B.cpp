#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int T; cin >> T;
    while (T --) {
        int n; cin >> n;
        int cnt1 = 0, cnt2 = 0;
        for (int i = 1; i <= n; i ++) {
            int x; cin >> x;
            if (x % 2 == 0) cnt1 += x;
            else cnt2 += x;

        }
        // cout << cnt1 << " " << cnt2 << "\n";
        if (cnt1 > cnt2) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}   