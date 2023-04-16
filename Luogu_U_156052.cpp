#include<bits/stdc++.h>
using namespace std;
int T = 1;
vector <int> vT, va, vb;
void hanoi(char a,char b,char c,int n){
    if (n==1) cout<<n << " "<<  a<<" "<<c<<endl, T ++;  //直接移动到C柱，输出 
    else {
        hanoi(a,c,b,n-1);  //把上面n-1个移到B柱
        cout<< n << " " << a<<" "<<c<<endl, T ++;  //输出
        hanoi(b,a,c,n-1);  //把剩下n-1个从B柱移到C柱
    }
}
int main(){
    int n;
    cin>>n;
    hanoi('1','2','3',n);
}