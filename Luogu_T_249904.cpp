#include <bits/stdc++.h>

using namespace std;
int n, m, a[305][305], sum[105][105], dp[105][105][105], suf[105][105][105], ans = -2e9; 
int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> n >> m;
    for (int i = 1; i <= n; i ++) {
        for (int j = 1; j <= m; j ++) {
            cin >> a[i][j];
            sum[i][j] = sum[i][j - 1] + a[i][j];
        }
        // for (int l = 1, r = l + len - 1; r <= m; l ++, r ++) {
        //     dp[i][l] = max(dp[i - 1][l - 1], dp[i - 1][l]) + sum[i][r] - sum[i][l - 1];
        //     if (i == n) ans = max(ans, dp[i][l]);
        // }
    }
    memset(dp, 0x80, sizeof(dp));
    memset(dp[0], 0, sizeof(dp[0]));
    memset(suf, 0x80, sizeof(suf));
    memset(suf[0], 0, sizeof(suf[0]));
    for (int i = 1; i <= n; i ++) {
        for (int l = 1; l <= m; l ++) {
            for (int r = m; r >= l; r --) {
                for (int k = 1; k < l; k ++) {
                    dp[i][l][r] = max(dp[i][l][r], suf[i - 1][k][r] + sum[i][r] - sum[i][l - 1]);
                    dp[i][l][r] = max(dp[i][l][r], suf[i - 1][k][r + 1] + sum[i][r] - sum[i][l - 1]);
                    suf[i][l][r] = max(suf[i][l][r + 1], dp[i][l][r]);
                    if (i == n) {
                        ans = max(ans, dp[i][l][r]);
                    }
                }
            }
        }
    }
    cout << ans;
    return 0;
}