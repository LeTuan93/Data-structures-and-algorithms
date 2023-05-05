#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	stack<int> st;
	vector<int> v;
	while ( cin >> s){
		if ( s=="push"){
			int x ;
			cin >> x;
			st.push(x);
			v.push_back(x);
		}
		else if (s == "pop"){
			st.pop();
			v.pop_back();
		}
		else if (s=="show"){
			for (int i=0;i<v.size();i++){
				cout << v[i]<<" ";
			}
			cout<<endl;
		}
		if (st.size()==0){
			cout<<"empty";
			break;
		}
	}
}
