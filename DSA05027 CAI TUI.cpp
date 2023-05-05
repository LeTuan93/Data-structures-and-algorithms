#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n,k;
		cin >> n >> k;
		long long w[n+1],v[n+1];
		for (int i = 0; i < n; i++) cin >> w[i];
		for (int i = 0; i < n; i++) cin >> v[i];
		int c[n+5][n+5];
		for (int i = 0 ; i < n; i++){
			for (int j = 0 ; j <= k; j++){
				if (i==0 || j ==0) c[i][j]=0;
				else{
					c[i][j]=c[i-1][j];
					if (j-w[i]>=0){
						int x= c[i-1][j-w[i]]+v[i];
						c[i][j]=max(c[i][j],x);
					}
				}
			}
		}
		cout<<c[n-1][k]<<endl;
	}
}
