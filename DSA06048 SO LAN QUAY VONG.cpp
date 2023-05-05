#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		long long a[n+1];
		for (int i=1;i<=n;i++) cin >> a[i];
		int vt=1;
		while (a[vt]<a[vt+1] && vt+1<=n) vt++;
		if (vt+1>=n) cout<<0;
		else cout<<vt;
		cout<<endl;
	}
}
