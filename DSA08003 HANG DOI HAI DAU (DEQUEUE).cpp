#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	deque<int> q;
	while ( t-- ){
		string s;
		cin >> s;
		if ( s == "PUSHFRONT"){
			int x;
			cin >> x;
			q.push_front(x); 
		} else if( s == "PRINTFRONT"){
			if (q.size()==0) cout<<"NONE";
			else cout<<q.front();
			cout<<endl;
		} else if ( s== "POPFRONT"){
			if (q.size()!=0) q.pop_front();
		} else if (s == "PUSHBACK"){
			int x;
			cin >> x;
			q.push_back(x);
		} else if (s=="PRINTBACK"){
			if (q.size()==0) cout<<"NONE";
			else cout<<q.back();
			cout<<endl;
		} else if ( s=="POPBACK"){
			if (q.size()!=0) q.pop_back();
		}
	}
}
