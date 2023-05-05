#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		int a[n+5];
		for (int i=1;i<=n;i++) cin >> a[i];
		int b[n+5];
		for (int i=1;i<=n;i++) b[i]=i;
		int cnt=1;
		while (1){
		int check=0;
			for (int i=1;i<=n;i++){
				if (a[i]==b[i]) check++;
			}
			if (check==n) break;
			cnt++;
			int vt=n;
			while (b[vt]<b[vt-1]) vt--;
			int sp=n;
			while (b[sp]<b[vt-1]) sp--;
			swap(b[vt-1],b[sp]);
			sort(b+vt,b+n+1);
		}
		cout<<cnt<<endl;
	}
//1 3 2 4		
}
