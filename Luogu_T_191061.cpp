#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int T; cin >> T;
    while (T --) {
        int n; cin >> n;
        unordered_set <int> mp;
        while (n --) {
            int tmp; cin >> tmp;
            if (!mp.count(tmp)){
                cout << tmp << " ";
                mp.insert(tmp);
            }
        }
        cout << "\n";
    }
    return 0;
}