#include <bits/stdc++.h>

using namespace std;
int sum[5005][5005], n, m;
int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> n >> m;
    while (n --) {
        int x, y, z;
        sum[x + 1][y + 1] += z;
    }
	for (int i = 1; i <= 5001; i ++)
		for (int j = 1; j <= 5001; j ++)
			sum[i][j] = sum[i - 1][j] + sum[i][j - 1] - sum[i - 1][j - 1] + sum[i][j];
    int ans = 0;
	for (int i = m; i <= 5001; i ++)
		for (int j = m; j <= 5001; j ++) {
			int num = sum[i][j] - sum[i - m][j] - sum[i][j - m] + sum[i - m][j - m];
			ans = max(ans, num);
		}
	cout << ans << endl;
    return 0;
}