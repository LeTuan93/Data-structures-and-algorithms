#include<bits/stdc++.h>
using namespace std;

vector<int> adj[1001];
int unused[1001];
int v ,e;
int check;
int x[1001];

void fill(){
	memset(unused,0,sizeof(unused));
}


void hmt(int k){
	for (auto y: adj[x[k-1]]){
		if (k-1==v){
			check=1;
		}
		else if (unused[y]==0){
			unused[y]=1;
			x[k]=y;
			hmt(k+1);
			unused[y]=0;
		}
	}
}

void hmt_path(int i){
	fill();
	memset(x,0,sizeof(x));
	unused[i]=1;
	x[1]=i;
	hmt(2);
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
		check=0;
		for (int i=1;i<=v;i++){
			hmt_path(i);
		}
		cout<<check<<endl;
	}
}

