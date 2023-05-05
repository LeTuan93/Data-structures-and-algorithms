#include<bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin >> t;
	while (t--){
		int n,x;
		cin >> n >>x ;
		int a[n+1];
		for (int i=1;i<=n;i++) {
			cin >> a[i];
		}
		int vt=1;
		while (a[vt]<a[vt+1] && vt+1<=n) vt++;
		if (binary_search(a+1,a+vt+1,x)){
			cout<<lower_bound(a+1,a+vt+1,x)-a;
		}
		else {
			cout<<lower_bound(a+vt+1,a+n+1,x)-a;
		}
		cout<<endl;
	}
}
