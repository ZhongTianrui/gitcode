#include <bits/stdc++.h>

using namespace std;
string get_name(string name) {
    int x = name.find("yyy loves ") + 1;
    string ans = name.substr(x, 10);
    cout << x << " " << ans << "\n";
    return ans;
}
int main() {
    string user_name, query, last_query;
    for (int i = 1; scanf("%s : %s", &user_name, &query); i ++) {
        if (i != 1 and query != last_query) {
            cout << "Unsuccessful @" + get_name(query) + "attempt\n";
            cout << i << "\n";
            cout << user_name << "\n";
        }
    }
    return 0;
}