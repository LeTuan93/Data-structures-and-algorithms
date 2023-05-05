#include<bits/stdc++.h>
using namespace std;

int xausangso(string s){
	int ans=0;
	for (int i=0;i<s.size();i++){
		ans=ans*10+(s[i]-'0');
	}
	return ans;
}


int unused[1005];
vector<int> adj[1005];

void dfs(int i){
     cout<<i<<" ";
	unused[i]=1;
	for (auto x : adj[i]){
		if (unused[x]==0){
			dfs(x);
		}
	}
}

int main(){
	int t;
	cin >> t;
	while (t--){
		memset(adj,0,sizeof(adj));
		int v,e,u;
		cin >> v >> e>> u;
		cin.ignore();
		string s;
		getline(cin ,s);
		stringstream ss(s);
		string tmp;
		int cnt=0;
		int a,b;
		while (ss >> tmp){
			cnt++;
			int y=xausangso(tmp);
			if (cnt%2==1) {
				a=y;
				continue;
			} else{
				b=y;
				adj[a].push_back(b);
				//adj[b].push_back(a);
				//cout<<a<<" "<<b<<endl;
			}
		}
		memset(unused,0,sizeof(unused));
		dfs(u);
		cout<<endl;
	}
}

