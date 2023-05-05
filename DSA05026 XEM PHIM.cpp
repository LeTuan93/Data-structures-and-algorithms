#include<bits/stdc++.h>
using namespace std;

int main(){
	int  n,c;
	cin >> c >> n;
	int a[n+5];
	for(int i=1;i<=n;i++) cin >> a[i];
	int dp[c+5];
	memset(dp,0,sizeof(dp));
	dp[0]=1;
	for (int i=1;i<=n;i++){
		for (int j=c;j>=a[i];j--){
			if (dp[j-a[i]]==1) {
				dp[j]=1;
			}
		}
	}
	for (int i=c;i>=0;i--){
		if (dp[i]==1) {
			cout<<i
			break;
		}
	}
}
