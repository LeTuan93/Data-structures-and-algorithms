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
		map<int,int> mp;
		int check=0;
		for (int i=1;i<=n;i++){
			mp[a[i]]++;
		}
		for (int i=1;i<=n;i++){
			if (mp[a[i]]==2) {
				cout<<a[i];
				check=1;
				break;
			}
		}
		if (check==0) cout<<"NO";
		cout<<endl;
	}
}
