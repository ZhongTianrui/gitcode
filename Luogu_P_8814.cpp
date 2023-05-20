#include<bits/stdc++.h>
using namespace std;
long long k,n,d,e;
long long m; 
int main ( )
{
    ios::sync_with_stdio(false);
    cin>>k;
    while (k--)
    {
        cin>>e>>n>>d;
        m=e-n*d+2;
        double p=(m-1.0*sqrt(m*m-4*e))/2.0;
        long long p1=p;
        long long q=m-p;
        if (m*m-4*e<0||p1!=p||p1*q!=e)
            cout<<"NO"<<endl;
        else 
            cout<<p1<<" "<<q<<endl;
    }
}
