#include<bits/stdc++.h>
using namespace std;

long long dp[100005];
const long long m=1e9+7;
long long max(long long a, long long b){
     if (a>=b) return a;
     return b;
}
long long QHD(long long n,long long k){
     if (dp[n]!=0) return dp[n]%m;
     if (n<=1 || k<=1) return dp[n]=1;
     dp[n]=(((2*QHD(n-1,k)%m)-QHD(max(n-k-1,0),k)%m)+m)%m;
     dp[n]%=m;
     return dp[n]%m;
}
int main(){
     ios_base::sync_with_stdio(0);
     cin.tie(NULL);
     cout.tie(NULL);
     int t;
     cin >> t;
     while (t--){
          long long n,k;
          cin >> n >>k;
          memset(dp,0,sizeof(dp));
          long long j=2;
          long long save=1;
          for (int i=2;i<=k;i++){
               save=((save%m)*(j%m))%m;
               dp[i]=save%m;
          }
          cout<<QHD(n,k)<<"\n";
     }
}
