#include<bits/stdc++.h>
using namespace std;


long long qhd(int n,int k){
	if (k>n) return 0;
	if (n==k || k==0) return 1;
	return qhd(n-1,k-1)+qhd(n-1,k);
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while (t--){
		int n,m;
		cin >> n >> m;
		int a[n+3][m+3];
		for (int i=1;i<=n;i++){
			for (int j=1;j<=m;j++){
				cin >> a[i][j];
			}
		}
		cout<<qhd(n+m-2,n-1)<<endl;
		
	}
}
