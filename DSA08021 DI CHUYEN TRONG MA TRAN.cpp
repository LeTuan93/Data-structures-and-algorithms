#include<bits/stdc++.h>
using namespace std;

struct point{
	int u,v,w;
};

int main(){
	int t;
	cin >> t;
	while (t--){
		int n,m;
		cin >> n >> m;
		int a[n+1][m+1];
		queue<point> q;
		for (int i=1;i<=n;i++){
			for (int j=1;j<=m;j++){
				cin >> a[i][j];
			}
		}
		q.push({1,1,0});
		int ans=INT_MAX;
		while (q.size()!=0){
			point present=q.front();
			q.pop();
			if (present.u>n || present.v > m) continue;
			if (present.u==n && present.v==m){
				ans=min(ans,present.w);
			}
			
			point nextVertical={present.u+a[present.u][present.v],present.v,present.w+1};
			if (present.u+a[present.u][present.v]<=n && present.v<=m){
				q.push(nextVertical);
			}
			
			point nextHorizontal={present.u , present.v+a[present.u][present.v],present.w+1};
			if (present.v+a[present.u][present.v]<=m && present.u<=n ){
				q.push(nextHorizontal);
			}
		}
		if (ans==INT_MAX) cout<<"-1"<<endl;
		else cout<<ans<<endl;
	}
}
