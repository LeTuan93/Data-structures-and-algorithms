#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n,x;
		cin >> n >> x;
		int a[n+5];
		for (int i=1;i<=n;i++) cin >> a[i];
		auto it = lower_bound(a+1,a+n+1,x)- a;
		if (binary_search(a+1,a+n+1,x)==true){
			cout<<it<<endl;
		}
		else if (it!=n+1 && it-1!=0) {
			if (a[it]>x) cout<<it-1<<endl;
		}
		else cout<<-1<<endl;
	}
}
