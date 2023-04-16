#include <bits/stdc++.h>

using namespace std;

int main() {
    // ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    double db = 0, ans = 0;
    int n; cin >> n;
    int a[100005], sum[100005] = {};
    for (int i = 1; i <= n; i ++) cin >> a[i], sum[i] = sum[i - 1] + a[i];
    for (int i = 1; i <= n; i ++) {
        // for (int j = 1; j <= i; j ++) {
        //     int len = i - j + 1;
        //     db += (sum[i] - sum[j - 1]) / (len * 1.0);
        //     // cout << (i + j) / 2.0 << " ";
        // }
        // cout << "\n";

    }   
    for (int i = 1; i <= n; i++) {
            ans += sum[n - i + 1] - sum[i - 1];
            db += ans / i;
    }
    printf("%.1lf", db);
    return 0;
}