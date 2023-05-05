#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n , m;
		cin >> n >> m;
		long long a[n+1], b[m+1];
		for (int i=1;i<=n;i++) cin >> a[i];
		for (int i=1;i<=m;i++) cin >> b[i];
		sort(a+1,a+n+1);
		sort(b+1,b+n+1);
		cout<<(long long)a[n]*b[1]<<endl;
	}
}
