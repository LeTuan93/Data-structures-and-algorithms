#include<bits/stdc++.h>
using namespace std;

const int INF=1e9;

int nex[105][105];
int d[105][105];
int a[105][105];
int n,m;

void floyd(){
	for(int i=1;i<=n;i++){
		for (int j=1;j<=n;j++){
			d[i][j]= a[i][j];
			nex[i][j]=j;
		}
	}
	for (int k=1;k<=n;k++){
		for (int i=1;i<=n;i++){
			for (int j=1;j<=n;j++){
				if (d[i][j] > d[i][k] + d[k][j]){
					d[i][j] = d[i][k] + d[k][j];
					nex[i][j] = nex[i][k];
				}
			}
		}
	}
}


int main(){
	cin >> n >> m;
	memset(a,-1,sizeof(a));
	for (int i=1;i<=m;i++){
		int u,v,w;
		cin >> u >> v >> w;
		a[u][v]=w;
		a[v][u]=w;
	}
	for (int i=1;i<=n;i++){
		for (int j=1;j<=n;j++){
			if (i!=j && a[i][j]==-1){
				a[i][j]=INF;
			}
			else if (i==j){
				a[i][j]=0;
			}
			else if (a[i][j]==0){
				a[i][j]=INF;
			}
		}
	}
//	for (int i=1;i<=n;i++){
//		for (int j=1;j<=n;j++){
//			cout << a[i][j]<<" ";
//		}
//		cout<<endl;
//	}
	floyd();
	int q;
	cin >> q;
	while (q--){
		int u,v;
		cin >> u >> v;
		cout<< d[u][v]<<endl;
	}
}
