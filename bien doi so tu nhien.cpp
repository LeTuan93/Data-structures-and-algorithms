#include<bits/stdc++.h>
using namespace std;
int main() {
	int t,n;
	cin >> t;
	while (t--) {
		cin >> n;
		queue < pair <int,int> > q;
		q.push({n,0});
		map < int,int> mp;
		mp.insert({n,0});
		while(1) {
			pair <int,int> p = q.front();
			int st = p.first , en = p.second;
			q.pop();
			if(st==1) {
				cout<<en<<endl;
				break;
			}
			if(!mp[st-1]) {
				mp[st-1] = 1;
				q.push({st-1,en+1});
			}
			for(int i = sqrt(st); i>=2; --i) if(st%i==0 &&!mp[st/i]) {
				mp[st/i] = 1;
				q.push({st/i,en+1});
			}
		}
	}
}