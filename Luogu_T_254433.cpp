/**
 * @Author: ztrztr
 * @Email: ztrztr2011@163.com
 * @Date: 2023/3/10 21:32:10
 * @LastEditors: ztrztr
 * @LastEditTime: 2023/3/10 21:32:10
 * Description: 
 * Copyright: Copyright (©)}) 2023 ztrztr. All rights reserved.
 */
#include<bits/stdc++.h>
using namespace std;
int n,a[1000005],dp[1000005][2],dpp[1000005][2];
int main() {
	cin>>n;
	for (int i=1;i<=n;i++) {
		cin>>a[i];
	}
	if(n==1) {
		cout<<a[1];
		return 0;
	}
	dp[1][1]=0;
	dpp[1][1]=a[1];
	for (int i=2;i<=n;i++) {
		dp[i][0]=max(dp[i-1][0],dp[i-1][1]);
		dp[i][1]=dp[i-1][0]+a[i];
		dpp[i][0]=max(dpp[i-1][0],dpp[i-1][1]);
		dpp[i][1]=dpp[i-1][0]+a[i];
	}
	cout<<max(dpp[n][0],max(dp[n][0],dp[n][1])) << "\n";
	return 0;
}