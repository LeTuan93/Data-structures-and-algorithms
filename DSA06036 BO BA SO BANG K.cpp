#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n,k;
		cin >> n >>k;
		int a[n+1];
		for (int i=1;i<=n;i++) cin >> a[i];
		sort(a+1,a+n+1);
		int check=0;
		for (int i=1;i<=n-1;i++){
			for (int j=i+1;j<=n;j++){
				if (binary_search(a+j+1,a+n+1,k-a[i]-a[j])){
					check=1;
					cout<<"YES\n";
					break;
				}
			}
			if (check==1) break;
		}
		if (check==0) cout<<"NO\n";
	}
}
