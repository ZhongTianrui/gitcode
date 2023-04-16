#include <bits/stdc++.h>

using namespace std;
int a[100005], b[100005], c[100005], f[100005], n, L[100005], R[100005];
int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i ++) {
        cin >> a[i];
        f[i] = a[i];
    }
    sort(a + 1, a + n + 1);
    for (int i = 1; i <= n; i ++) {
        int l, r;
        cin >> l >> r;
        b[i] = f[i] + l;
        L[i] = b[i];
        c[i] = f[i] + r;
        R[i] = c[i];
    }
    sort(b + 1, b + n + 1, greater<int>{});
    sort(c + 1, c + n + 1, greater<int>{});
    // for (int i = 1; i <= n; i ++) {
    //     cout << a[i] << " " << b[i] << " " << c[i] << " " << f[i] << "\n";
    // }
    for (int i = 1; i <= n; i ++) 
        cout << (lower_bound(b + 1, b + n + 1, R[i], greater<int>{}) - b) << " " << (lower_bound(c + 1, c + n + 1, L[i], greater<int>{}) - c - (L[i] != R[i])) << "\n";
    return 0;
}