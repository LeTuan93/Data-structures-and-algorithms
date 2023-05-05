#include<bits/stdc++.h>
using namespace std;

vector<int> adj[1005];
int unused[1005];
int v,e;


int xausangso(string s){
	int ans=0;
	for (int i=0;i<s.size();i++){
		ans=ans*10+(s[i]-'0');
	}
	return ans;
}

void dfs(int i){
	unused[i]=1;
	for (auto x : adj[i]){
		if (unused[x]==0){
			dfs(x);
		}
	}
}

void dinhtru(){
	memset(unused,0,sizeof(unused));
	int tplt=0;
	for (int i=1;i<=v;i++){
		if (unused[i]==0){
			tplt++;
			dfs(i);
		}
	}
	for (int i=1;i<=v;i++){
		memset(unused,0,sizeof(unused));
		int dem=0;
		unused[i]=1;
		for (int j=1;j<=v;j++){
			if (unused[j]==0){
				dem++;
				dfs(j);
			}
		}
		//cout<<dem<<" "<<tplt<<endl;
		if (dem>tplt){
			cout<<i<<" ";
		}
	}
	cout<<endl;
}

int main(){
	int t;
	cin >> t;
	while (t--){
	     memset(adj,0,sizeof(adj));
		cin >> v >> e;
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
				adj[b].push_back(a);
			}
		}
		dinhtru();
	}
}
