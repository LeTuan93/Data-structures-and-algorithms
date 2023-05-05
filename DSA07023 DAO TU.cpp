#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >>t;
	string  s;
	cin.ignore();
	while (t--){
		stack<string > st;
		getline(cin ,s);
		stringstream ss(s);
		string tmp;
		while ( ss >> tmp){
			st.push(tmp);
		}
		while (st.size()!=0){
			cout << st.top()<<" ";
			st.pop();
		}
		cout<<endl;
	}
}
