#include<bits/stdc++.h>
using namespace std;

vector<int> adj[1001];
int unused[1001];
int v ,e;

void dfs(int i){
	unused[i]=1;
	for (auto x: adj[i]){
		if (unused[x]==0){
			dfs(x);
		}
	}
}

void bfs(int i){
	queue<int> q;
	unused[i]=1;
	q.push(i);
	while (q.size()!=0){
		int top=q.front();
		q.pop();
		for (auto x : adj[top]){
			if (unused[x]==0){
				unused[x]=1;
				q.push(x);
			}
		}
	}
}

void fill(){
	memset(unused,0,sizeof(unused));
}
int countTPLT(){
	int tplt=0;
	fill();
	for (int i=1;i<=v;i++){
		if (unused[i]==0){
			tplt++;
			bfs(i);
		}
	}
	return tplt;	
}
int main(){
	int t;
	cin >> t;
	while (t--){
		cin >> v >> e;
		memset(adj,0,sizeof(adj));
		for (int i=0;i<e;i++){
			int a,b;
			cin >> a >> b;
			adj[a].push_back(b);
			adj[b].push_back(a);
		}
		cout<<countTPLT()<<endl;
	}
}
