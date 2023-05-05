#include<bits/stdc++.h>
using namespace std;

int main (){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		int a[n+4],b[n+4],c[n+4];
		for (int i=1;i<=n;i++){
			cin >> a[i];
		}
		b[n-1]=a[n];
	    for (int i=n-2;i>=1;i--){
			b[i]=min(a[i+1],b[i+1]);
		}
		c[1]=a[1];
	    for (int i=2;i<=n-1;i++){
			c[i]=max(c[i-1],a[i]);
		}
//		for (int i=1;i<=n;i++){
//			cout<<c[i]<<" ";
//		}
//		cout<<endl;
//		for (int i=1;i<=n;i++){
//			cout<<b[i]<<" ";
//		}
//		cout<<endl;
		vector<int> v;
	//	v.clear();
		for (int i=1;i<=n-1;i++){
			if (c[i]<=b[i]) {
				v.push_back(i);
			} 
		}
		if (v.size()==0){
			cout<<0<<endl<<endl;
		}
		else {
			cout<<v.size()<<endl;
			for (int i=0;i<v.size();i++) cout<<v[i]<<" ";
			cout<<endl;
		}
	}
}
