#include<bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		int a[n+1];
		for (int i=0;i<n;i++) cin >> a[i];
		int ans=0;
		int dp[n+1];
		for (int i=0;i<n;i++) dp[i]=1;
		for (int i=1;i<n;i++){
			for (int j=0;j<i;j++){
				if (a[i]>=a[j]) dp[i]=max(dp[j]+1,dp[i]);
			}
		}
		cout<<n-*max_element(dp,dp+n)<<endl;
	}
}
