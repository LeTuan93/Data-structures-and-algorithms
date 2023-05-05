#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	stack<int> st;
	int t;
	cin >> t;
	while (t--){
		cin >> s;
		if ( s=="PUSH"){
			int x ;
			cin >> x;
			st.push(x);
		}
		else if (s == "POP"){
			if (st.size()!=0) st.pop();
		}
		else if (s=="PRINT"){
			if (st.size()==0) cout<<"NONE\n";
			else cout<<st.top()<<endl;
		}
	}
}
