/**
 * @Author: ztrztr
 * @Date: 2023/4/29 17:13:15
 * @LastEditors: ztrztr
 * @LastEditTime: 2023/4/30 14:15:09
 * Description: 
 * Copyright: Copyright (©)}) 2023 ztrztr. All rights reserved.
 */
#include <bits/stdc++.h>

using namespace std;
int dp[1005], cnt = 0;
string S, T;
int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> S >> T;
    for (int i = 0, j = 0; i < T.size() && j < S.size(); j ++) {
        if (T[i] == S[j]) i ++, cnt += 2; 
        dp[i] = max(dp[i], dp[i - 1 + (T[i] == S[i])])
    }
    cout << cnt;
    return 0;
}