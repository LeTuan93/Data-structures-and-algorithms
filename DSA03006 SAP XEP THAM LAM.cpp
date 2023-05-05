#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		int a[n+3],b[n+3];
		for (int i=1;i<=n;i++) {
			cin >> a[i];
			b[i]=a[i];
		}
		if (n==1 || n==2) cout<<"Yes";
		else{
			sort(a+1,a+n+1);
			int check=0;
			for (int i=1;i<=n;i++){
				if (b[i]!=a[i] && b[i]!=a[n-i+1]){
					check=1;
					break;
				}
			}
			if (check==1){
				cout<<"No";
			}else cout<<"Yes";
		}
		cout<<endl;
	}
}
