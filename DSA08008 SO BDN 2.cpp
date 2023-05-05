#include<bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin >> t;
	while (t--){
		long long n;
		cin  >> n;
		queue<long long> q;
		q.push(1);
		while (1){
			long long front = q.front();
			q.pop();	
			long long a = front*10;
			long long b = front*10+1;
			if (a%n==0) {
				cout<<a<<endl;
				break;
			}
			q.push(a);
			if (b%n==0) {
				cout<<b<<endl;
				break;
			}
			q.push(b);	
		}
	}
}
