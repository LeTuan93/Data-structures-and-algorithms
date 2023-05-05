#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	queue<int> q;
	while (t--){
		string s;
		cin >> s;
		if (s=="PUSH"){
			int x ;
			cin >> x;
			q.push(x);
		} else if ( s== "PRINTFRONT"){
			if (q.size()==0) cout<<"NONE";
			else cout<<q.front();
			cout<<endl;
		} else if ( s == "POP"){
			if (q.size()!=0) q.pop();
		}
	}
}
