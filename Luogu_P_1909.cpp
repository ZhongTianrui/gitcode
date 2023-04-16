#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n, ans = 1e9;
    int a[10], b[10];
    cin >> n;
    for (int i = 1; i <= 3; i ++) {
        cin >> a[i] >> b[i];
        // cout << (n + a[i] - 1) / a[i] << "\n";
        ans = min(ans, (n + a[i] - 1) / a[i] * b[i]);
    }
    cout << ans;
    return 0;
}