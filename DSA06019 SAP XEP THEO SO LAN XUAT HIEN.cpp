#include<bits/stdc++.h>
using namespace std;


bool cmp (pair<int,int> a,pair<int,int> b){
	if (a.first == b.first) return a.second<b.second;
	return a.first>b.first;
}

int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		int a[n+1];
		vector<pair<int,int>> v(n);
		map<int,int> mp; 
		for (int i=1;i<=n;i++) {
			cin >> a[i];
			mp[a[i]]++;
		}
		int tmp=1;
		for (auto x:mp){
			v[tmp].first=x.second;
			v[tmp].second=x.first;
			tmp++;
		}
		sort(v.begin(),v.end(),cmp);
		 for (auto x: v){
		 	while (x.first--) {
			 	cout<<x.second<<" ";
			}	
		 }
		cout<<endl;
	}
}
