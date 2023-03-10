/**
 * @Author: ztrztr
 * @Email: ztrztr2011@163.com
 * @Date: 2023/3/9 19:03:08
 * @LastEditors: ztrztr
 * @LastEditTime: 2023/3/9 19:03:08
 * Description: 
 * Copyright: Copyright (©)}) 2023 ztrztr. All rights reserved.
 */
#include <bits/stdc++.h>

using namespace std;
//I AK IOI
int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    long long T; cin >> T;
    while (T --) {
        long long n, cnt = 0, tmp = 0; cin >> n;
        long long a[100005];
        long long Max = 0;
        for (int i = 1; i <= n; i ++) {
            int x; cin >> x;
            a[i] = x;
            if (x == 1) cnt ++;
            if (x == 2) {
                if(a[i - 1] == 1 and cnt >= 3) {
					if(cnt % 2 == 1) {
						tmp += cnt / 2;
						cnt = 1;
					} else {
						tmp += cnt / 2 - 1;
						cnt = 2;
					}
				}
            }  
            Max = max(Max, tmp + cnt);
        }
        cout << Max << "\n";
    }
    return 0;
}