#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		int a[n+1];
		for (int i=1;i<=n;i++) cin >> a[i];
		while (1){
			if (n==0) break;
			cout<<"[";
			for (int i=1;i<=n;i++) {
				 cout<<a[i];
				 if (i!=n) cout<<" ";
			}
			cout<<"]"<<endl;
			for (int i=1;i<=n-1;i++){
				a[i]=a[i]+a[i+1];
			}
			n--;
		}
	}
}
	
