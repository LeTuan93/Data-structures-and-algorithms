#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
void solve(int n, int k)
{
    int a[100005];
    a[0]=1;
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        if(i<=k)
        {
            sum=(sum+a[i-1])%MOD;
            a[i]=sum;
        }
        else
        {
            a[i]=((2*a[i-1])%MOD-(a[i-k-1]%MOD)+MOD)%MOD;
        }
    }
    cout<<a[n]<<'\n';
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        solve(n,k);
    }
}
