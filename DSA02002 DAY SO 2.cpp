#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		int a[n+5];
		stack<string> mp;
		for (int i=1;i<=n;i++) cin >> a[i];
		while (1){
			if (n<1) break;
			string s="[";
			for (int i=1;i<=n;i++){
				s=s+to_string(a[i]);
				if (i!=n) s=s+" ";
			}
			s+="]";
			mp.push(s);
			for (int i=1;i<=n-1;i++){
				a[i]=a[i]+a[i+1];
			}
			n--;
		}
		while (mp.size()!=0){
			cout<<mp.top();
			if (mp.size()!=1) cout<<" ";
			mp.pop();
		}
		cout<<endl;
	}
}
