#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		queue<int> q;
		while (n--){
			int x;
			cin >> x;
			if (x == 1){
				cout<<q.size()<<endl;
			} else if (x==2){
				if (q.size()!=0) cout<<"NO\n";
				else cout<<"YES\n";
			} else if ( x==3){
				int y;
				cin >> y;
				q.push(y);
			} else if ( x == 4){
				if (q.size()!=0) q.pop();
			} else if (x== 5){
				if (q.size()==0) cout<<-1<<endl;
				else cout<<q.front()<<endl;
			} else if (x== 6){
				if (q.size()==0) cout<<-1<<endl;
				else cout<<q.back()<<endl;
			}
		}
	}
}
