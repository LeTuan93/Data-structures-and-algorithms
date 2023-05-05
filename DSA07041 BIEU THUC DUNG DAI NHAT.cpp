#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		string s;
		cin >> s;
		stack<char> st;
		int ans=0;
		for (int i=0;i<s.size();i++){
			if (s[i]==')'){
				if (st.size()!=0 && st.top()=='('){
					st.pop();
					ans+=2;
				}
			}
			else {
				st.push(s[i]);
			}
		}
		cout<<ans<<endl;
	}
}

