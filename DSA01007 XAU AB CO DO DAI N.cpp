#include<bits/stdc++.h>
using namespace std;
#define endl "\n";
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
int main()
{
    int t;
    cin>>t;
    while  (t--)
    {
          int n;
          cin>>n;
          string s;
          for (int i=0;i<n;i++) s+='A';
          cout<<s<<" ";
          for (int i=pow(2,n);i>1;i--)
          {
               int k=s.size()-1;
               while (s[k]=='B') k--;
               s[k]='B';
               for (int j=k+1;j<s.size();j++) s[j]='A';
               cout<<s<<" ";
          }
          cout<<endl;
    }
}