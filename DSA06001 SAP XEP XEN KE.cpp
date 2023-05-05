#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		int a[n+4];
		for (int i=1;i<=n;i++){
			cin >> a[i];
		}
		sort(a+1,a+n+1);
		int cnt=n+1;
		for (int i=1;i<=n;i++){
			cnt--;
			if (cnt == i-1) break;
			cout<<a[cnt]<<" ";
			if (cnt==i) break;
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
}
