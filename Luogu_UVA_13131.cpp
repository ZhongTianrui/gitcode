#include <bits/stdc++.h>

using namespace std;
int ANS(int n, int k) {
    int sum = 0;
    for (int i = 1; i * i <= n; i ++) {
//        cout << i % k << " ";
        if (n % i == 0 &&  i % k != 0) {
            sum += i; 

        }
        if (n % i == 0 && i * i != n && (n / i) % k != 0) {
            sum += n / i;
        }
    }
    return sum;
}
int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int T; cin >> T;
    while (T --) {
        int n, k; cin >> n >> k;
//        cout << n << " " << k << "\n";
        cout << ANS(n, k) << "\n";
    }
    return 0;
}