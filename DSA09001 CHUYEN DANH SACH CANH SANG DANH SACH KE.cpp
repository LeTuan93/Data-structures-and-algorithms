#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int v,e;
		cin >> v >> e;
		vector<int> adj[v+2];
		for (int i=0;i<e;i++){
			int a,b;
			cin >> a >> b;
			adj[a].push_back(b);
			adj[b].push_back(a);
		}
		for (int i=1;i<=v;i++){
			cout<<i<<": ";
			for (auto x : adj[i]){
				cout<<x<<" ";
			}
			cout<<endl;
		}
	}
}
