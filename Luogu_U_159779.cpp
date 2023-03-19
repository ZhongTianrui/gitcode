#include <bits/stdc++.h>

using namespace std;
bool fun(int n, int k) {  
    	int j=0,a[10000];
//	cout<<"请输入n和k（n为十进制，k为输出的进制）(k<=36)(大写字母版)：";
	// cin>>n>>k;
//	cout<<endl;
//	cout<<n;
	while(n>0){
		a[j]=n%k;
		n/=k;
		j++;
	}
//	cout<<"的"<<k<<"进制为："; 
bool bbb = 1;
	for(int i=j-1;i>0;i--){
		// if(a[i]>=10)printf("%c",a[i]+('A'-10));
		// else cout<<a[i]; 
        if (a[i - 1] <= a[i]) bbb = 0;
	}
    return bbb;
}
int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n; cin >> n;
    for (int i = 2; ; i ++) {
        if (fun(n, i)) {
            cout << i << "\n";
            return 0;
        }
    }
    return 0;
}