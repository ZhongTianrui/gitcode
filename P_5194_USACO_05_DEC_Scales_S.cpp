#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
ll sum[1005], a[1005], su, n, C;
void DFS(ll x, ll nw) {
    if (x > C) return;
    if (sum[nw - 1] + x <= C) {
        su = max(su, sum[nw - 1] + x);
        return;
    }
    su = max(su, x);
    for (int i = 1; i <= nw - 1; i ++) {
        DFS(x + a[i], i);
    }
}
int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> n >> C;
    for (int i = 1; i <= n; i ++) {
        cin >> a[i];
        sum[i] = sum[i - 1] + a[i];
    }
    DFS(0, n + 1);
    cout << su;
    return 0;
}