#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		queue<string> q;
		q.push("6");
		q.push("8");
		stack<string> st;
		while (1){
			string front = q.front();
			q.pop();
			st.push(front);
			string a = front+"6";
			if (a.size()>n) break;
			q.push(a);
			string b = front+"8";
			if (b.size()>n) break;
			q.push(b);
		}
		while (q.size()!=0){
			st.push(q.front());
			q.pop();
		}
		while (st.size()!=0){
			cout<<st.top()<<" ";
			st.pop();
		}
		cout<<endl;
	}
}
