#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int d;
		cin >> d;
		string s;
		cin >> s;
		map<int,int> mp;
		int m=INT_MIN;
		for (char x : s){
			mp[x]++;
			m=max(mp[x],m);
		}
		if (s.size()+1>=d*m){
			cout<<1<<endl;
		}
		else cout<<-1<<endl;
	}
}
