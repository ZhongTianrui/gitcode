#include <bits/stdc++.h>

#include<bits/stdc++.h>
using namespace std;
vector <long long> pfc(long long n) {
    vector <long long> vv;
    for (long long i = 1; i <= n; i ++) {
        if (n % i == 0) {
            vv.push_back(i);
        }
    }
    return vv;
}
int fun(int n, int k) {  
    	int j=0,a[10000];
//	cout<<"请输入n和k（n为十进制，k为输出的进制）(k<=36)(大写字母版)：";
	// cin>>n>>k;
//	cout<<endl;
//	cout<<n;
	int sum = 0;
	while(n>0){
		a[j]=n%k;
		sum += a[j];
		n/=k;
		j++;
	}
	return sum;
}
using namespace std;
int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int T; cin >> T;
    while (T --) {
        long long x, sum; cin >> x >> sum;
		bool bbb = 0;
        vector <long long> v = pfc(x - sum);
        // 遍历每个因数，一一暴力验证
        for (int i = 0; i < v.size(); i ++) {
            if (fun(x, v[i] + 1) == sum) {
				cout << v[i] + 1 << "\n";
				bbb = 1;
				break;
			}
			// cout << v[i] + 1 << " ";
        }
		// cout << x - sum << " " << pfc(x - sum).size() << "\n";
		
		if (!bbb) cout << "-1\n";
		// cout << "\n";
        
    }
    return 0;
}	