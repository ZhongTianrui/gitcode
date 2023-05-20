#include <bits/stdc++.h>

using namespace std;
int n, a[5000005], k;
int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> n >> k;
    for (int i = 1; i <= n; i ++) {
        cin >> a[i];
    }
    nth_element(a + 1, a + k + 1, a + 1 + n);
    cout << a[k + 1];
    return 0;
}