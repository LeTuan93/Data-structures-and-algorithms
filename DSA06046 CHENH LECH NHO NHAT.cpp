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
		int m=INT_MAX;
		sort(a+1,a+n+1);
		int b[n+1];
		for (int i=2;i<=n;i++){
			b[i]=a[i]-a[i-1];
			if (b[i]<m) m=b[i];
		}
		cout<<m<<endl;
	}
}
