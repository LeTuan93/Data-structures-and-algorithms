#include<bits/stdc++.h>
using namespace std;


int xausangso(string s){
	int ans=0;
	for (int i=0;i<s.size();i++){
		ans=ans*10+(s[i]-'0');
	}
	return ans;
}

int main(){
	int n;
	cin >> n;
	cin.ignore();
	vector<int> adj[n+2];
	for (int i=1;i<=n;i++){
		string s;
		string tmp;
		getline(cin,s);
		stringstream ss(s);
		while (ss>> tmp){
			int y=xausangso(tmp);
			if (i<y) adj[i].push_back(y);
		}
	}
	for (int i=1;i<=n;i++){
		for (auto x:adj[i]){
			cout<<i<<" "<<x<<endl;
		}
	}
}
