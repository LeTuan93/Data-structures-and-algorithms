#include <bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
int main()
{
     faster();
     int t;
     cin >> t;
     while (t--){
	     int n;
	     cin>>n;
	     long long a[n];
	     int b[10]={0};
	     for (int i=0;i<n;i++){
	          cin>>a[i];
	          if (a[i]==0) b[a[i]]++;
	          else{
	          while (a[i]!=0)
	          {
	               b[a[i]%10]++;
	               a[i]/=10;
	          }
	          }
	     }
	     for (int i=0;i<=9;i++){
	          if (b[i]!=0)
	          {
	               cout<<i<<" ";
	          }
	     }
		 cout<<endl;
	}
}
