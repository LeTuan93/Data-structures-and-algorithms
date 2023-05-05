#include<bits/stdc++.h>
using namespace std;


long long a[1000006],b[1000006],c[1000006];
int main(){
	int t;
	cin >> t;
	while (t--){
		int n,m,k;
		cin >> n >> m >> k;
		
		for (int i=1;i<=n;i++) cin >> a[i];
		for (int i=1;i<=m;i++) cin >> b[i];
		for (int i=1;i<=k;i++) cin >> c[i];
		int check=0;
		int x=min(n,min(m,k));
		if (x==n){
			for (int i=1;i<=n;i++){
				if (binary_search(b+1,b+m+1,a[i]) && binary_search(c+1,c+k+1,a[i])) {
					cout<<a[i]<<" ";	
					check=1;
				}
			}
		}
		else if (x==m){
			for (int i=1;i<=m;i++){
				if (binary_search(a+1,a+n+1,b[i]) && binary_search(c+1,c+k+1,b[i])) {
					cout<<b[i]<<" ";	
					check=1;
				}
			}
		}
		else if (x==k){
			for (int i=1;i<=k;i++){
				if (binary_search(a+1,a+n+1,c[i]) && binary_search(b+1,b+m+1,c[i])) {
					cout<<c[i]<<" ";	
					check=1;
				}
			}
		}
		if (check ==0) cout<<-1;
		cout<<endl;
	}
}
