#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		string s;
		cin >> s;
		stack<char> st;
		for (int i=0;i<s.size();i++){
			if (s[i]=='(' || s[i]=='{' || s[i]=='['){
				st.push(s[i]);
			}
			else{
				if (s[i]==')' && st.size()!=0 && st.top()=='('){
					st.pop();
				} else if (s[i]=='}' && st.size()!=0 && st.top()=='{'){
					st.pop();
				} else if (s[i]==']' && st.size()!=0 && st.top()=='['){
					st.pop();
				}
			}
		}
		if (st.size()!=0) cout<<"NO";
		else cout<<"YES";
		cout<<endl;
	}
}
