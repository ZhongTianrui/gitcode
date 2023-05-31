#include <bits/stdc++.h>

#include<windows.h>

using namespace std;
double compute(char op, double a, double b) {
    if (op == '+') {
        return a + b;
    } else if (op == '*') {
        return a * b;
    } else if (op == '/') {
        return a / b;
    } else if (op == '-') {
        return a - b;
    } else {
        return -0.1;
    }
}
int main() {
    cout << "Please enter a suffix expression,this program will tell you the ans.the expression is:";
    string e;
    cin >> e;
    stack <double> st;
    for (int i = 0; i < e.size(); i ++) {
        if (e[i] <= '9' and e[i] >= '0') {
            st.push(e[i] - '0');
        } else {
            if (st.size() < 2) {
                cout << "[ERR] A ERROR IN THE EXPRESSION!\n";
                cout << "Program returns with [ERR CODE=1].\n";
                system("pause");
                return 0;
            }
            int a, b;
            a = st.top();
            st.pop();
            b = st.top();
            st.pop();
            st.push(compute(e[i], a, b));
//[DEBUG]            cout << st.top() << "\n";
        }
    }
    cout << st.top() << "\n";
    system("pause");
    return 0;
}