#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	int a[n+5];
	int b[n+5];
//	b[0]=0;
	for (int i=1;i<=n;i++) {
		cin >> a[i];b[i]=i;
	}
	sort(a+1,a+n+1);
	for (int i=1;i<=n;i++) cout<<a[b[i]]<<" ";
	cout<<endl;
	while (1){
		int vt=n;
		while (b[vt]<b[vt-1]) vt--;
		if (vt<1) break;
		int sp=n;
		while (b[sp]<b[vt-1]) sp--;
		swap(b[sp],b[vt-1]);
		sort(b+vt,b+n+1);
		for (int i=1;i<=n;i++) cout<<a[b[i]]<<" ";
		cout<<endl;
	}
	
}
	
