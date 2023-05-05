#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while (t--){
		int n,k;
		cin >> n >> k;
		int a[n+2];
		for (int i=n;i>n-k;i--) a[i]=1;
		for (int i=n-k;i>=1;i--) a[i]=0;
		for (int i=1;i<=n;i++) cout<<a[i];
		cout<<endl;
		while(1){
			int vt=n;
			a[0]=-1;
			while (a[vt]==1 ) vt--;
			if (vt==0) break;
			a[vt]++;
			for (int i=vt+1;i<=n;i++) a[i]=0;
			int cnt=0;
			for (int i=1;i<=n;i++) {
				if (a[i]==1) cnt++;
			}
			if (cnt==k) {
				for (int i=1;i<=n;i++) cout<<a[i];
				cout<<endl;
			}
		}
			
	}
		
}
