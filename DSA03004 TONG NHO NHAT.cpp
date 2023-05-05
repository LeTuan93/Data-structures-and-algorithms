#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		int a[n+3];
		for (int i=1;i<=n;i++) cin >> a[i];
		sort(a+1,a+n+1);
		long long chan=0;
		long long le=0;
		for (int i=1;i<=n;i++) {
			if (i%2==1){
				le=le*10+a[i];
			}
			else chan=chan*10+a[i];
		}
		cout<<chan+le<<endl;
	}
}
