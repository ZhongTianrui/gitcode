#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    long a, b, ans;
    cin >> a >> b;
    if (a == 1) {
        cout << 1;
        return 0;
    }
    if (a == 0) {
        cout << 0;
        return 0;
    }
    ans = 1;
    for (int i = 1; i <= b; i ++)  {
        ans *= a;
        if (ans > 1e9) {
            cout << "-1";
            return 0;
        }
    }
    cout << ans;
    return 0;
}