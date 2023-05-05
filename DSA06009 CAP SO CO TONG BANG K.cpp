#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n,k;
		cin >> n >> k;
		int a[n+3];
		for (int i=1;i<=n;i++) cin >> a[i];
		sort(a+1,a+n+1);
		int cnt=0;
		for (int i=1;i<=n-1;i++){
				cnt+=upper_bound(a+i+1,a+n+2,k-a[i])-lower_bound(a+i,a+n+2,k-a[i]);
		}
		cout<<cnt<<endl;
	}
}
