#include<bits/stdc++.h>
using namespace std;

int check(string s){
	int ans=0;
	int mul=1;
	for (int i=s.size()-1;i>=0;i--){
		if (i!=s.size()-1) mul=mul*2;
		if (s[i]=='1'){
			ans=ans+mul;
		}
	}
	return ans;
}

int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin  >> n;
		queue<string> q;
		q.push("1");
		vector<string> v;
		while (1){
			v.push_back(q.front());
			string front = q.front();
			q.pop();	
			string a = front+"0";
			string b = front+"1";
			q.push(a);
			if (check(a)==n) break;
			q.push(b);
			if (check(b)==n) break;		
		}
		for (int i=0;i<v.size();i++) cout<< v[i]<<" ";
		while (q.size()!=0){
			cout<<q.front()<<" ";
			q.pop();
		}
		cout<<endl;
	}
}
