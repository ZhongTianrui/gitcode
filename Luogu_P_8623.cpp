#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int w, n, m;
    int n_x, n_y, m_x, m_y;
    cin >> w >> n >> m;
    n_x = n - w * (n + w) / (2 * w);
    if (n_x > w) {
        n_x = n_x - w;
    } 
    n_y = (n - w) / (2 * w) * 2;
    m_x = (m + 2 * w) / (2 * w);
    if (m_x > w) {
        m_x = m_x - w;
    } 
    m_y = (m - w) / (2 * w) * 2;
    cout << n_x << " " << n_y << " " << m_x << " " << m_y << "\n";
    cout << abs(n_y - m_y) + abs(n_x - m_x);
    return 0;
}