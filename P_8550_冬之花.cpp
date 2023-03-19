#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int T; cin >> T;
    while (T --) {
        int n, x, fi, fl = 0, nw;
        cin >> n >> x >> fi;
        for (int i = 2; i <= n; i ++) {
            int nw; cin >> nw;
            fl = (nw != fi) ? 1 : 0;
        }
        if (fl) {
            cout << "Yes" << "\n";
            continue;
        }
        if (x % fi != 0) {
            cout << "Yes" << "\n";
            continue;
        }
        if (x / fi > 0) {
            cout << "Yes" << "\n";
            continue;
        }
        cout << "No\n";
    }
    return 0;
}