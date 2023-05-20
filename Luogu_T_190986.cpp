#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n, k, a[10005];
    cin >> n >> k;
    for (int i = 1; i <= n; i ++) {
        cin >> a[i];
    }
    for (int i = 1; i <= k; i ++) {
        next_permutation(a + 1, a + n + 1);
    }
    for (int i = 1; i <= n; i ++) {
        cout << a[i] << " ";
    }
    return 0;
}