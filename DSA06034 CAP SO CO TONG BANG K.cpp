#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n,k;
		cin >> n >>k;
		int a[n+1];
		for (int i=1;i<=n;i++) cin >> a[i];
		sort(a+1,a+n+1);
		long long cnt=0;
		for (int i=1;i<=n-1;i++){
			int x=upper_bound(a+i+1, a+n+1, k-a[i]) - lower_bound(a+i+1, a+n+1, k-a[i]);
			cnt+=x;
		}
		cout<<cnt<<endl;
	}
}
