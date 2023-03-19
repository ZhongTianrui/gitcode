/**
 * @Author: ztrztr
 * @Email: ztrztr2011@163.com
 * @Date: 2023/3/12 15:25:51
 * @LastEditors: ztrztr
 * @LastEditTime: 2023/3/12 15:25:51
 * Description: 
 * Copyright: Copyright (©)}) 2023 ztrztr. All rights reserved.
 */
#include <bits/stdc++.h>

using namespace std;
//求最长升序子序列的长度，并输出
const int MAXSIZE=1000005;
int a[MAXSIZE];
int s[MAXSIZE];
int main()
{
    int m,k;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ttt = -1e9;
    s[0]=1;m=s[0];k=0;
    for(int i=1;i<=n;i++){
        if(a[i]>a[i-1]){
            s[i]+=s[i-1]+1;
        }else{
            s[i]=1;
        }
        if(s[i]>=m){
            m=s[i];
            k=i;    
            int tttt = 0;
                // cout << a[k - m - 1] << " " << a[k - m + 1] << " " << a[k - m + 2] << " " << a[k - 1] << " " << a[k] << " " << a[k + 2] << " " << k - m + 1 << "\n";
    if ((a[k - m - 1] > a[k - m + 1] and a[k - m + 1] > a[k - m + 2]) or (a[k - m - 1] < a[k - m + 1] and a[k - m + 1] < a[k - m + 2])
    or (a[k + 2] > a[k] and a[k] > a[k - 1]) or a[k + 2] < a[k] and a[k] < a[k - 1]) tttt ++;
            ttt = max(ttt, tttt + m + 1);
        }
    }
    // cout << a[k - m - 1] << " " << a[k - m + 1] << " " << a[k - m + 2]k << " " << k - m + 1 << "\n";
    // if ((a[k - m - 1] > a[k - m + 1] and a[k - m + 1] > a[k - m + 2]) or (a[k - m - 1] < a[k - m + 1] and a[k - m + 1] < a[k - m + 2])) ttt += 2;
    cout << ttt + 1;
    return 0;
}

