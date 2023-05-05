#include<bits/stdc++.h>
#define endl "\n";
#define matrix vector<vector<long long>>
const long long mod=1e9+7;
using namespace std;
unsigned long long F[100];
long long fib(int n){
   if (F[n]!=-1) return F[n];
   if (n==1 || n==2) return F[n]=1;
   F[n]=fib(n-1)+fib(n-2);
   return F[n];
}
string fiboo(long long n ,long long i)
{
     if (n==1) return "A";
     if (n==2) return "B";
     if (i<=F[n-2]) return fiboo(n-2,i);
     else return fiboo(n-1,i+F[n-1]-F[n]);
}
int main()
{
     ios_base::sync_with_stdio(0);
     cin.tie(NULL);
     cout.tie(NULL);
     int t;
     cin>> t;
     for (int i=0;i<=92;i++){
         F[i]=-1;
      }
     F[0]=0;
     unsigned long long k=fib(92);
     while (t--)
     {
          long long n,i;
          cin >> n>> i;
          cout<<fiboo(n,i);
          cout<<endl;
     }
}
