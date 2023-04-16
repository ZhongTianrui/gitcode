#include <bits/stdc++.h>

using namespace std;
int a[500005], b[500005];
int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n; cin >> n;
    
    for (int i = 1; i <= n; i ++) {
        cin >> a[i]; b[i] = a[i];
    }
    int Q; cin >> Q;
    for (int i = 1; i <= Q; i ++) {
        int I, J; cin >> I >> J;
        a[I] = J;
        sort(a + 1, a + n + 1);
        long long sum = 0;
        for (int j = 1; j <= n; j ++) {
            cout << a[j] << " ";
            sum += j * a[j];
            a[j] = b[j];
        }
        cout << "\n";
        cout << sum << "\n";
    }
    return 0;
}