#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int T; cin >> T;
    while (T --) {
        long double n; cin >> n;
        long double dn = sqrtl(n);
        if (dn == (long long )(dn)) cout << (long long)(dn) << "\n";
        else cout << -1 << "\n";
    }
    return 0;
}