#include<bits/stdc++.h>
using namespace std;

long long solve(long long n){
	queue<pair<long long,int>> q;
	set<long long> s;
	s.insert(n);
	q.push({n,0});
	while (q.size()!=0){
		pair<long long ,int> front = q.front();
		q.pop();
		if (front.first == 1) return front.second;
		if (front.first == 2) return front.second+1;
		for (int i=2;i<=sqrt(front.first);i++){
			if (front.first%i==0 && s.find(front.first/i)==s.end()){
				q.push({front.first/i,front.second+1});
				s.insert(front.first/i);
			}
		}
		q.push({front.first-1,front.second+1});
	}
}

int main(){
	int t;
	cin >> t;
	while (t--){
		long long n;
		cin >> n;
		cout<<solve(n)<<endl;
	}
}
