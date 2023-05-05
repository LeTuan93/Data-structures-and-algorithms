#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n ;
		cin >> n ;
		long long a[n+1];
		for (int i=1;i<=n;i++) {
			cin >> a[i];
		}
		int cnt=0;
		sort(a+1,a+n+1);
		for (int i=1;i<=n-1;i++){
			if (a[i+1]!=a[i]) cnt+=a[i+1]-a[i]-1;
		}
		cout<<cnt<<endl;
	}
}
