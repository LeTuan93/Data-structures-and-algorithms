#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n,k;
	cin >> n >> k;
	set<string> st;
	string s;
	for (int i=1;i<=n;i++) {
		cin >> s;
		st.insert(s);
	}
	string a[n+1];
	int j=1;
	for (string x:st){
		a[j]=x;
		j++;
	}
	j--;
	for (int i=1;i<=k;i++) cout<<a[i]<<" ";
	cout<<endl;
	int b[k+1];
	for(int i=1;i<=k;i++) b[i]=i;
	while (1){
		int vt=k;
		while (b[vt]==j-k+vt) vt--;
		if (vt<1) break;
		b[vt]++;
		for (int i=vt+1;i<=k;i++){
			b[i]=b[i-1]+1;
		}
		for (int i=1;i<=k;i++){
			cout<<a[b[i]]<<" ";
		}
		cout<<endl;
	}
}
