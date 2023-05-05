#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n,k;
		cin >> n >> k ;
		int a[n+1];
		for (int i=1;i<=n;i++) cin >> a[i];
		sort(a+1,a+n+1);
		int x=n;
		while (k--){
			cout<<a[x]<<" ";
			x--;
		}
		cout<<endl;
	}
}
