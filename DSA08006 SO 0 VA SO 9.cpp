#include<bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		queue<long long> q;
		q.push(9);
		while (1){
			long long front=q.front();
			if (front%n==0) {
				cout<<front<<endl;
				break;
			}
			q.pop();
			long long a=front*10;
			q.push(a);
			long long b=front*10+9;
			q.push(b);			
		}
	}
}
