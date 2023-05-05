#include<bits/stdc++.h>
using namespace std;

int  cnt, s[100],sum,n,s1,best;
const int mod=1e+7;
void Try(int i,int sum)
{
     for (int j=0;j<=1;j++)
     {
          sum+=s[i]*j;
          cnt+=j;
          if (i==n)
          {
               if (cnt<best && sum==s1) best=cnt;
          }
          else if (sum<=s1)Try(i+1,sum);
          sum-=s[i]*j;
          cnt-=j;
     }
}
int main(){
     int t;
     cin >> t;
     while (t--)
     {
        cin >> n >>s1;
        for (int i=1;i<=n;i++) cin >> s[i];
        cnt=0;
        sum=0;
     	best=1e9+7;
     	Try(1,0);
     	if (best==1e9+7) cout<<-1<<endl;
     	else cout << best << endl;
     }
}
