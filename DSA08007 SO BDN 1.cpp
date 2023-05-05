#include<bits/stdc++.h>
using namespace std;

int cmp(string a,string b){
	if (a.size()==b.size()){
		if (a>b) return 1;
		else return 0;
	}
	else if (a.size()>b.size()) return 1;
	else return 0;
}
int main(){
	int t;
	cin >> t;
	while (t--){
		string n;
		cin  >> n;
		queue<string> q;
		q.push("1");
		long long cnt=0;
		while (1){
			cnt++;
			string front = q.front();
			q.pop();	
			string a = front+"0";
			string b = front+"1";
			if (cmp(a,n)==1) break;
			q.push(a);
			if (cmp(b,n)==1) break;	
			q.push(b);	
		}
		cout<<cnt+q.size()<<endl;
	}
}
