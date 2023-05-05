#include<bits/stdc++.h>
using namespace std;

int unused[100];
string key;
string s;
void backtrack(int k){
	for (int i=1;i<=s.size();i++){
		if (unused[i]==0){
			unused[i]=1;
			k++;
			key=key+s[i-1];
			if (k==s.size()){
				cout<<key<<" ";
			}
			else backtrack(k);
			unused[i]=0;
			k--;
			key.pop_back();
		}
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while (t--){
		cin >> s;
		string key="";
		memset(unused,0,sizeof(int));
		backtrack(0);
		cout<<endl;
	}
}
