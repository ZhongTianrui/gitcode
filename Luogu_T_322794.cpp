#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int m; cin >> m;
    int a[1005] = {};
    a[1] = 1;
    for (int i = 1; i <= m; i ++) {
        char x1; cin >> x1;
        int x = x1 - '0';
        // cout << x << " " ;
        for (int j = 1; j <= m; j ++) {
            if (x == 1) {
                if (j % 2 == 1) {
                    a[j + 1] = (a[j + 1] + a[j]) % 998244353;
                }
            } else {
                if (j % 2 == 0) {
                    a[j + 1] = (a[j + 1] + a[j]) % 998244353;
                }
            }
        }
    }
    long long cnt = 1;
    for (int i = 1; i <= m; i ++) {
        cnt = (cnt * (a[i] + 1)) % 998244353;
        // cout << a[i] << " " ;
    }
    cout << cnt + 1 << "\n";
    return 0;
}
/*
must have required property 'clientId' must have required property 'appId' must NOT have additional properties must match exactly one schema in oneOf [invalid-params]
*/