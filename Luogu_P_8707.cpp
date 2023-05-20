/**
 * @Author: ztrztr
 * @Date: 2023/4/29 16:42:09
 * @LastEditors: ztrztr
 * @LastEditTime: 2023/4/29 16:42:09
 * Description: 
 * Copyright: Copyright (©)}) 2023 ztrztr. All rights reserved.
 */
#include <bits/stdc++.h>

using namespace std;
int dp[105][105], n, m;
int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> n >> m;
    dp[1][1] = 1;
    for (int i = 1; i <= n; i ++) {
        dp[i][1] = 1;
    }
    for (int i = 1; i <= m; i ++) {
        dp[1][i] = 1;
    }

    for (int i = 2; i <= n; i ++) {
        for (int j = 2; j <= m; j ++) {
            dp[i][j] = dp[i][j - 1] + dp[i - 1][j];
            if (i % 2 == 0 and j % 2 == 0) dp[i][j] = 0;
        }
    }

    cout << dp[n][m];
    return 0;
}