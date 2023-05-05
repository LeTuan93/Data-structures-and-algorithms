#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while (t--){
		string s;
		cin >> s;
		int vt=s.size()-1;
		while (s[vt]=='0') vt--;
		if (vt==-1){
		     for (int i=0;i<s.size();i++) cout<<'1';
		     cout<<endl;
		}
		else{
		     s[vt]='0';
		     for (int i=vt+1;i<s.size();i++) s[i]='1';
		     cout<<s<<endl;
		}
	}
}
