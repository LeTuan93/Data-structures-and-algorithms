#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	priority_queue<int,vector<int>,greater<int>> q;
	while (t--){
		int n;
		cin >> n;
		int a[n+1];
		while (q.size()!=0) q.pop();
		for (int i=0;i<n;i++) {
			cin >> a[i];
			q.push(a[i]);
		}
		if (n==1) cout<<a[0]<<endl;
		else{
			long long ans=0;
			int tmp;
			while (true){
				tmp=0;
				if (q.size()==0) break;
				tmp+=q.top();
				q.pop();
				if (q.size()==0) break;
				tmp+=q.top();
				q.pop();
				ans+=tmp;
				//cout<<ans<<endl;
				if (q.size()==0) break;
				q.push(tmp);
			}
			cout<<ans<<endl;
		}
	}
}
