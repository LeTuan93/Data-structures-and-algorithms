#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n,k;
	cin >> n >> k;
	int a[n+5];
	set<int> st;
	for (int i=1;i<=n;i++) {
		cin >> a[i];
		st.insert(a[i]);
	}
	vector<int> b;
	for (auto x: st){
		b.push_back(x);	
	}
	int c[k+5];
	n=st.size();
	for (int i=1;i<=k;i++) {
		c[i]=i;
		cout<<b[c[i]-1]<<" ";
	}
	cout<<endl;
	while (1){
		int vt=k;
		while (c[vt]==n-k+vt) vt--;
		if (vt<1) break;
		c[vt]++;
		for (int i=vt+1;i<=k;i++) c[i]=c[i-1]+1;
		for (int i=1;i<=k;i++) cout<<b[c[i]-1]<<" ";
		cout<<endl;
	}
}
	
