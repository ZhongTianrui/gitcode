#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n; cin >> n;
    int a[1005], sum = 0;
    for (int i = 1; i <= n; i ++) {
        cin >> a[i];
        sum += a[i];
    }
    int l, r; cin >> l >> r;
    if (sum > n * r or sum < n * l) {
        cout << "-1"; return 0;
    }
    int ans1 = 0, ans2 = 0;
    for (int i = 1; i <= n; i ++) {
        if (a[i] > r) ans2 += (a[i] - r);
        if (a[i] < l) ans1 += (l - a[i]);
    }
    cout << max(ans1, ans2);
    return 0;
}