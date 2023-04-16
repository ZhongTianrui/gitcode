#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n; cin >> n;
    int a[100005];
    for (int i = 1; i <= n; i ++) {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1);
    if (n % 2 == 0) {
        cout << a[n / 2];
    } else {
        cout << a[(n + 1) / 2];
    }
    return 0;
}