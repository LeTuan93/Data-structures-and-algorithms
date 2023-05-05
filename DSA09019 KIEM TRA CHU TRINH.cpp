#include<bits/stdc++.h>
using namespace std;

vector<int> adj[1001];
int degree[1001];
int countV0;
int unused[1001];
int v,e;

void dfs(int i){
	unused[i]=1;
	for (auto x: adj[i]){
		if (unused[x]==0){
			dfs(x);
		}
	}
}

//check cac dinh do thi khac 0 lien thong voi nhau
int checklt(int countV0){
	int tplt=0;
	memset(unused,0,sizeof(unused));
	for (int i=1;i<=v;i++){
		if (unused[i]==0){
			tplt++;
			dfs(i);
		}		
	}
	if (tplt ==1 && countV0==v) return 1;
	else return 0;
}

int main(){
	int t;
	cin >> t;
	while (t--){
		cin >> v >> e;
		memset(adj,0,sizeof(adj));
		memset(degree,0,sizeof(degree));
		int countV0=0;
		for (int i=0;i<e;i++){
			int a,b;
			cin >> a >> b;
			adj[a].push_back(b);
			adj[b].push_back(a);
			degree[a]++;
			degree[b]++;
		}
 		int countVOdd=0;
		for (int i=1;i<=v;i++){
			if (degree[i]==0){
				countV0++;
			} 
			if (degree[i]%2==1 ){
				countVOdd++;
			}
		}
		countV0=v-countV0;
		int tmp = checklt(countV0);
		if (tmp==1 && countVOdd==0){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
}
