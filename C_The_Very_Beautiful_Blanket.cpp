#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int T; cin >> T;
    while (T --) {
        int n, m; cin >> n >> m;
        cout << n * m << "\n";
        for (int i = 1; i <= m; i ++) {
            cout << i << " ";
        }
        cout << "\n";
        for (int i = 2; i <= n; i ++) {
            for (int j = 1; j <= m; j ++) {
                cout << (i - 1) * (1 << __lg(m) + 1) + j << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}