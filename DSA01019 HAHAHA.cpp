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
		cin >> n ;
		int a[n+2];
		for (int i=1;i<=n;i++) a[i]=0;
		while(1){
			int vt=n;
			a[0]=-1;
			while (a[vt]==1 ) vt--;
			if (vt==0) break;
			a[vt]++;
			for (int i=vt+1;i<=n;i++) a[i]=0;
			int check=0;
			for (int i=1;i<=n-1;i++) {
				if (a[i]==a[i+1] && a[i]==1) check=1;
			}
			if (a[1]==0) check=1;
			if (a[n]==1) check=1;
			if (check==0) {
				for (int i=1;i<=n;i++) {
					if (a[i]==1) cout<<'H';
					else cout<<'A';	
				}
				cout<<endl;
			}
		}
			
	}
		
}
