/**
 * @Author: ztrztr
 * @Email: ztrztr2011@163.com
 * @Date: 2023/3/9 18:07:42
 * @LastEditors: ztrztr
 * @LastEditTime: 2023/3/9 18:07:42
 * Description: 
 * Copyright: Copyright (©)}) 2023 ztrztr. All rights reserved.
 */
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int T; cin >> T;
    while (T --) {
        int n, a[10005], cnt1 = 0, cnt2 = 0;
        cin >> n;
        // vector <int> v1, v2;
        for (int i = 1; i <= n; i ++) {
            cin >> a[i];
            if (a[i] > 0) cnt1 ++;
            else cnt2 ++;
        }
        //Max
        // cout << cnt1 << " " << cnt2;
        for (int i = 1; i <= cnt1; i ++) cout << i << " ";
        for (int i = 1; i <= cnt2; i ++) cout << cnt1 - i << " ";
        cout << "\n";
        //Min
        if (cnt1 >= cnt2) {
            int tmp = min(cnt1, cnt2);
            for (int i = 1; i <= tmp * 2; i ++) {
                cout << (i % 2 == 1 ? 1 : 0) << " ";
            }
            for (int i = 1; i <= n - tmp * 2; i ++) {
                cout << (i) << " ";
            }
        } else {
            int tmp = min(cnt1, cnt2);
            for (int i = 1; i <= tmp * 2; i ++) {
                cout << (i % 2 == 1 ? 1 : 0) << " ";
            }
            for (int i = 1; i <= n - tmp * 2; i ++) {
                cout << (0 - i) << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}