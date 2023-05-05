#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--)
	{
		int n,m;
		cin >> n >>m ;
		int a[n+1],b[m+1];
		map<int,int> mp;
		for (int i=1;i<=n;i++) {
			cin >> a[i];
			mp[a[i]]++;
		}
		for (int i=1;i<=m;i++) {
			cin >> b[i];
			mp[b[i]]++;
		}
		for (auto x: mp){
			cout<<x.first<<" ";
		}
		cout<<endl;
		for (auto x: mp){
			if (x.second==2) cout<<x.first<<" ";
		}
		cout<<endl;
	}
}
