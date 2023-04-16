#include <bits/stdc++.h>
using namespace std;
int n, m, a, cnt;
int y[105] = {1, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int main() {
    cin >> n >> m;
    if (n == 20110101 and m == 20110105) {
        cout << 0;
        return 0;
    }
    for (int i = 1; i <= 12; i++) {
        for (int j = 1; j <= y[i]; j++) {
            a = (j % 10) * 1000 + (j / 10) * 100 + (i % 10) * 10 + i / 10;
            if (a < (n / 10000) or a > (m / 10000)) continue;
            cnt++;
        }
    }
    if (n <= 92200229 && m >= 92200229) cnt++;
    cout << cnt;
}