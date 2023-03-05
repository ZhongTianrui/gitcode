#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int T; cin >> T;
    while (T --) {
        int n, tc, tm;
        cin >> n >> tc >> tm;
        int maxn = -1e9, flag = 0, ma = 0, mb = 0;
        int a[1005], b[1005], c[1005], sum[1005];
        for (int i = 1; i <= n; i ++) {
            cin >> a[i] >> b[i] >> c[i];
            sum[i] = tc * a[i] + tm * b[i];
            sum[i] -= c[i];
            if (maxn < sum[i]) {
                maxn = sum[i];
                flag = i;
                ma = a[i];
                mb = b[i];
            }
        }
        // cout << flag << "\n";
        int cha = (tc - ma) - (tm - mb);
        for (int i = 0; ; i ++) {
            int xx = (i + cha) / 2, yy = i - xx;
            // xx = tc - xx; yy = tm - yy;
            bool bbb = 1;
            for (int k = 0; k <= i; k ++) {
                int xxx = i - k;
                bool bb = 1;
                for (int j = 1; j <= n; j ++) {
                    // if ((tc - xx) * a[j] + (tm - yy) * b[j] > c[j]) {
                    //     bb = 0;x
                    //     break;
                    // }
                    if ((tc - k) * a[j] + (tm - xxx) * b[j] > c[j]) bb = 0;
                }
                if (bb) {
                    bbb = 0;
                    break;
                }
            }
            if (!bbb) {
                cout << i << "\n";
                break;
            }
            // int xx = (tc * a[i] - )
            // for (int j = 0; j <= i; j ++) {
            //     int k = i - j;

            // }
        }
    }
    return 0;
}