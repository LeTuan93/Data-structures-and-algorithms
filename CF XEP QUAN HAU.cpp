#include<bits/stdc++.h>
using namespace std;
 
int d1[100],d2[100],x[100],c[100];
int n,dem=0;
void Try(int i)
{
     for (int j=1;j<=n;j++)
     {
          if (c[j]==0 && d1[i-j+n]==0 && d2[i+j -1]==0)
          {
               x[i]=j;
               c[j]=d1[i-j+n]=d2[i+j-1]=1;
               if (i==n)
               {
                    dem++;
               }
               else Try(i+1);
               c[j]=d1[i-j+n]=d2[i+j-1]=0;
          }
     }
}
int main()
{
     ios_base::sync_with_stdio(0);
     cin.tie(NULL);
     cout.tie(NULL);
     int t;
     cin >> t;
     while (t--)
     {
          dem=0;
          cin >> n;
          Try(1);
          cout<<dem<<endl;
     }
}
