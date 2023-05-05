#include<bits/stdc++.h>
using namespace std;

int a[10000];
int b[10000];
int n,k;
int cnt=0;

void solve_UsingSinhNP(){
	while (1){
		int vt=n;
		while (a[vt]==1) vt--;
		if (vt==0) break;
		a[vt]++;
		for (int i=vt+1 ; i<=n;i++) a[i]=0;
		long long tong=0;
		for (int i=1;i<=n;i++){
			tong+=a[i]*b[i];
		}
		if (tong==k) {
			cnt++;
			for (int i=1;i<=n;i++){
				if (a[i]==1) cout<<b[i]<<" ";
			}
			cout<<endl;
		}
	}
	cout<<cnt;
}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> k;
	for (int i=1;i<=n;i++) cin >> b[i];
	solve_UsingSinhNP();
}
