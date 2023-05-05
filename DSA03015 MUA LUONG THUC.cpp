#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n,s,m;
		cin >>  n >> s >> m;
		if (n<m || (n==m && s > 6 ) || (n-m)*6<m) cout<<-1<<endl;
		else {
			int du = (s*m)%n;
			int kq = (s*m)/n;
			if (du!=0) kq+=1;
			cout<<kq<<endl;
		}
	}
}
