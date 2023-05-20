#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int T; cin >> T;
    while (T --) {
        set <int> st;
        int n, m; cin >> n >> m;
        int ans;
        for (int i = 1; i <= m; i ++) {
            int o, x; cin >> o >> x;
            if (o == 1) st.insert(x);
            else {
                for (int i = 1; i <= n; i ++) {
                    if (i != x) st.insert(i);
                }
            }
            if (st.size() == n) {
                ans = i;
                break;
            } else {
                ans = -1;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}