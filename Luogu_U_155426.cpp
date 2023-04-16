#include <bits/stdc++.h>

using namespace std;
map <int, int> mp;
int n, a[100005], maxn = 0, flag = 0;
int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> n;   
    for (int i = 1; i <= n; i ++) {
        cin >> a[i];
        mp[a[i]] ++;
    }
    for (auto i : mp) {
        if (i.second > maxn) {
            maxn = i.second;
            flag = i.first;
        }
    }
    cout << flag << " " << maxn;
    return 0;
}