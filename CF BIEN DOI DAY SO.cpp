#include<bits/stdc++.h>
#define endl "\n";
#define matrix vector<vector<long long>>
const long long mod=1e9+7;
using namespace std;
long long a[51];
long long solve (long long n, long long k)
{
     for (int i=1;i<=50;i++){
          if (a[i]==k) return i+1;
     }
     long long k1=k;
          long long x=1;
          while (k1)
          {
               k1/=2;
               x*=2;
          }
          x/=2;
          k=k-x;
          for (int i=1;i<=50;i++){
               if (a[i]==k) return i+1;
          }
          return solve(n,k);
}
int main()
{
     ios_base::sync_with_stdio(0);
     cin.tie(NULL);
     cout.tie(NULL);
     int t;
     cin >> t;
     a[0]=1;
     a[1]=2;
     for (int i=2;i<= 50 ;i++) a[i]=a[i-1]*2;
     while (t--)
     {
          long long n, k;
          cin >> n >> k;
          if (k%2==1) cout<<"1";
          else{
               cout<<solve(n,k);
          }
          cout<<endl;
     }
}

