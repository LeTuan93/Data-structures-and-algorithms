#include<bits/stdc++.h>
using namespace std;

int degree(string s){
	if (s == "^") return 5;
	if ( s== "/" || s=="*" || s=="%") return 4;
	if ( s== "+" || s=="-") return 3;
	return 2;
}

int main(){
	int t ;
	cin >> t;
	while (t--){
		string  s;
		cin >> s;
		stack<string> st;
		queue<string> q;
		for (int i=0;i<s.size();i++){
			if ((s[i]>='a' && s[i]<='z')|| (s[i]>='A' && s[i]<='Z') || (s[i]>='0' && s[i]<='9')){
				q.push(string(1,s[i]));
			}
			else {
				if (st.size()==0) st.push(string(1,s[i]));
				else if (s[i]=='(') st.push(string(1,s[i]));
				else if (s[i]==')'){
					while (st.top()!="("){
						q.push(st.top());
						st.pop();
					}
					st.pop();
				}
				else if (degree(string(1,s[i])) >  degree(st.top())){
					st.push(string(1,s[i]));
				} else  if (st.size()!=0 && degree(string(1,s[i])) <=  degree(st.top())){
					while (st.size()!=0 && degree(string(1,s[i])) <=  degree(st.top())){
						q.push(st.top());
						st.pop();
					}
					st.push(string(1,s[i]));
				}
			}
		}
		while (st.size()!=0){
			if (st.top()!="(") q.push(st.top());
			st.pop();
		}
		while (q.size()!=0){
			cout<<q.front();
			q.pop();
		}
		cout<<endl;
	}
}
