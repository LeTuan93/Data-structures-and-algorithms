#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n ,s;
		cin >>  n >> s;
		int a[n+5];
		for (int i=1;i<=n;i++) cin >> a[i];
		int mx=*max_element(a+1,a+n+1);
		int dp[n+5][s+5];
		
		for (int j=0;j<=s;j++){
			if (j==0) dp[0][j]=1;
			else dp[0][j]=0;
		}
		int check=0;
		for (int i=1;i<=n;i++){
			for (int k=0;k<=s;k++) dp[i][k]=dp[i-1][k]; 
			for (int j=s;j>=i;j--){
				if (dp[i][j-a[i]]==1) dp[i][j]=1;
				if (dp[i][j]==1 && j==s) check=1;
			}
		}
		if (check==1) cout<<"YES\n";
		else cout<<"NO\n";
	}
}
