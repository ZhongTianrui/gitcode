#include <bits/stdc++.h>

using namespace std;
vector <long long> fun(long long n) {
    vector <long long> vv;
    for (int i = 1; i <= n; i ++) {
        if (n % i == 0) {
            vv.push_back(i);
        }
    }
    return vv;
}
int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int x; cin >> x; 
    vector <long long> v = fun(x);
    for (int i = 0; i < v.size(); i ++) {
        cout << v[i] << " ";
    }
    return 0;
}