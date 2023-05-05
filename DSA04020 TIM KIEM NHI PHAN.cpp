#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >>t;
	while (t--){
		int n,k;
		cin >> n >> k;
		int a[n+1];
		for (int i=1;i<=n;i++) cin >> a[i];
		if (binary_search(a+1,a+n+1,k)==true){
			cout<<lower_bound(a+1,a+n+1,k)-a<<endl;
		}
		else cout<<"NO\n";
	}
}
