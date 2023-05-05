#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		int a[n+1];
		for (int i=1;i<=n;i++) cin >> a[i];
		sort(a+1,a+n+1);
		if (a[1]==a[2]) cout <<-1;
		else cout<<a[1]<<" "<<a[2];
		cout<<endl;
	}
}
