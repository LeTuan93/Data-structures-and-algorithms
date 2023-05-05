#include<bits/stdc++.h>
using namespace std;


vector<int> adj[1005];
int unused[1005];
vector<pair<int,int>> dscanh;

void dfs(int i){
	unused[i]=1;
	for (auto x: adj[i]){
		if (unused[x]==0){
			dfs(x);
		}
	}
}

void dfs2(int i,int s , int t){
	unused[i]=1;
	for (auto x : adj[i]){
		if ( (x==t && i ==s ) || (x==s && i ==t) ) continue;
		if (unused[x]==0){
			dfs2(x,s,t);
		}
	}
}
int main(){
	int t;
	cin >> t;
	while (t--){
		memset(unused,0,sizeof(unused));
		memset(adj,0,sizeof(adj));
		for (int i = 0; i < dscanh.size(); i++) {
    		dscanh[i] = make_pair(0, 0);
		}
		int v,e;
		cin >> v >>e;
		for (int i=1;i<=e;i++){
			int a,b;
			cin >> a >> b;
			adj[a].push_back(b);
			adj[b].push_back(a);
			dscanh.push_back({a,b});
		}
		
		int tplt=0;
		for (int i=1;i<=v;i++){
			if (unused[i]==0){
				tplt++;
				dfs(i);
			}
		}
		for (auto x : dscanh){
			int dem=0;
			for (int i=0;i<1005;i++) unused[i]=0;
			for (int i=1;i<=v;i++){
				if (unused[i]==0){
					dem++;
					dfs2(i,x.first,x.second);
				}
			}
			if (dem>tplt){
				//cout<<dem<<" "<<tplt<<endl;
				cout<<x.first<<" "<<x.second<<" ";
			}
		}
		cout<<endl;	
	}
}
