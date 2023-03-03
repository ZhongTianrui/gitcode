#include <bits/stdc++.h>

using namespace std;
long long g, n;
long long gx[10005], gy[10005], gt[10005], nx[10005], ny[10005], nt[10005], cnt;
int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> g >> n;
    for (int i = 1; i <= g; i ++) { 
        cin >> gx[i] >> gy[i] >> gt[i];
    }
    for (int i = 1; i <= n; i ++) {
        cin >> nx[i] >> ny[i] >> nt[i];
        int cntt = 0;
        for (int j = 1; j <= g; j ++) {
            if (abs(nx[i] - gx[j]) + abs(ny[i] - gy[j]) + nt[i] <= gt[j]) cntt ++;
            // cout << abs(nx[i] - gx[j]) + abs(ny[i] - gy[j]) << " " << gt[j] << " " <<  nt[i] << " " << (abs(gt[j] - nt[i])) << "\n";
        }
        cnt += (cntt == 0);
        // cout << cntt << "\n";
    }
    cout << cnt;
    return 0;
}