#include<bits/stdc++.h>
using namespace std;

const long long mod=1e9+7;

int main(){
	int t;
	cin >> t;
	long long dp[1001][1001]={};
	for (int i=1;i<=1000;i++) dp[i][1]=i;
	for (int i=2;i<=1000;i++){
		for (int j=2;j<=i;j++){
			dp[i][j]= (dp[i-1][j-1] *i) %mod;
		}
	}
	while (t--){
		int n,k;
		cin >> n >> k;
		cout<<dp[n][k]<<endl;
	}
}
