#include<bits/stdc++.h>
using namespace std;

vector<int> adj[1005];
int unused[1005];

void dfs(int i){
	cout<<i<<" ";
	unused[i]=1;
	for (auto x:adj[i]){
		if (unused[x]==0){
			dfs(x);
		}
	}
}

int main(){
	int t;
	cin >> t;
	while (t--){
		int u,v,e;
		cin >> v >> e >> u;
		memset(unused,0,sizeof(unused));
		memset(adj,0,sizeof(adj));
		for (int i=1;i<=e;i++){
			int a,b;
			cin >> a >> b;
			adj[a].push_back(b);
			adj[b].push_back(a);
		}
		dfs(u);
		cout<<endl;
	}
}
