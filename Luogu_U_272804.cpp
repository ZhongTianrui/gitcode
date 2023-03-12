#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll n, m, lll;
ll summ[1000005], sum[1000005];  
ll cf[1000005], cff[1000005];
int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> n >> m >> lll;
    for (int i = 1; i <= n; i ++) {
        cin >> summ[i];
    }
    for (int i = 1; i <= m; i ++) {
        int l, r; cin >> l >> r;
        if (l > r) {
            //交换
            swap(l, r);
        }
        cf[l] ++, cf[r] --;//差分
    }
    for (int i = 1; i <= n - 1; i ++) {
        cff[i] = cff[i - 1] + cf[i];
    }
    for (int i = 1; i <= n - 1; i ++) {
        sum[i] = sum[i - 1] + cff[i] * (summ[i + 1] - summ[i]);
    }
    ll ans = -1e18, j = 2;
    for (int i = 1; i <= n; i ++) {
        if (summ[i] + lll > summ[n]) break;
        ll cnt = 0;
        for (; j <= n + 1; j ++) if (summ[j] - summ[i] > lll) break; 
        cnt += sum[j - 2] - sum[i - 1];
        ll ch = lll - (summ[j - 1] - summ[i]);
        cnt += cff[j - 1] * ch;
        ans = max(ans, cnt);
    }
    j = n - 1;
    for (int i = n; i >= 1; i --) {
        //倒着来
        if (summ[i] - lll < 1) break;
        for (; j >= 0; j --) {
            if (summ[i] - summ[j] > lll) break;
        }
        ll cnt = 0;
        cnt += sum[i - 1] - sum[j];
        ll ch = lll - (summ[i] - summ[j + 1]);
        cnt += cff[j] * ch;
        ans = max(ans, cnt);
    }
    cout << ans << "\n";
    return 0;
}  