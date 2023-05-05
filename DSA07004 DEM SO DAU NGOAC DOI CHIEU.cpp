#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >>t;
	while (t--){
		string s;
		vector<char> v;
		cin >> s;
		for (int i=0;i<s.size();i++){
			if (s[i]==')'){
				if (v.size()!=0 && v[v.size()-1]=='('){
					v.pop_back();
				}
				else  v.push_back(s[i]);
			}
			else v.push_back(s[i]);
		}
		stack<char> st;
		int ans=0;
		for (int i=0;i<v.size();i++){
			if (v[i]==')' && st.size()==0){
				st.push('(');
				ans++;
			} else if (v[i]==')' && st.size()!=0){
				if (st.top()==')') ans++;
				st.pop();
			} else if (v[i]=='(' && st.size()==0){
				st.push(v[i]);
			} else if (v[i]=='(' && st.size()!=0){
				if (st.top()=='(') ans++;
				st.pop();
			}
		}
		cout<<ans<<endl;
	}
}
