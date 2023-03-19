#include <bits/stdc++.h>

using namespace std;
int n, m, a[305][305], sum[305][305], dp[305][305], ans; 
int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> n >> m;
    for (int i = 1, len = m; i <= n; i ++, len --) {
        for (int j = 1; j <= m; j ++) {
            cin >> a[i][j];
            sum[i][j] = sum[i][j - 1] + a[i][j];
        }
        for (int l = 1, r = l + len - 1; r <= m; l ++, r ++) {
            dp[i][l] = max(dp[i - 1][l - 1], dp[i - 1][l]) + sum[i][r] - sum[i][l - 1];
            if (i == n) ans = max(ans, dp[i][l]);
        }
    }
    cout << ans;
    return 0;
}