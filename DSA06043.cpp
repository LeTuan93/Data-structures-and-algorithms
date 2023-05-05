#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define endl "\n";
int main(){
     faster();
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		map<int,int> mp;
		int m=INT_MIN;
		for(int i=0;i<n;i++){
			cin>>a[i];
			mp[a[i]]++;
			m=max(m,mp[a[i]]);
		}
		if (m>n/2){
			for (auto x:mp){
				if (x.second==m) {
					cout<<x.first;
					break;
				}
			}
		}
		else cout<<"NO";
		cout<<endl;
	}
}
