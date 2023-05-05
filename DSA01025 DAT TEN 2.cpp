#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while (t--){
		int n,k;
		cin >> n >> k;
		int a[k+1];
		for(int i=1;i<=k;i++){
			a[i]=i;
			cout<<(char)(i+64);
		}
		cout<<endl;
		while (1){
			int vt=k;
			while (a[vt]==n-k+vt) vt--;
			if (vt<1) break;
			a[vt]++;
			for (int i=vt+1;i<=k;i++){
				a[i]=a[i-1]+1;
			}
			for (int i=1;i<=k;i++){
				cout<<(char)(a[i]+64);
			}
			cout<<endl;
		}
	}
}
