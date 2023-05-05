#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while (t--){
		int n,k;
		cin >> n >> k;
		int a[k+5];
		for(int i=1;i<=k;i++) cin >> a[i];
		int b[k+5];
		for (int i=1;i<=k;i++) b[i]=i;
		b[0]=-100;
		int cnt=1;
		while (1){
			int check=0;
			for (int i=1;i<=k;i++){
				if (a[i]==b[i]) check++;
			}
			if (check==k) break;
			cnt++;
			int vt=k;
			while (b[vt]==n-k+vt) vt--;
			b[vt]++;
			for (int i=vt+1;i<=k;i++) b[i]=b[i-1]+1;
		}		
		cout<<cnt<<endl;
	}		
}
