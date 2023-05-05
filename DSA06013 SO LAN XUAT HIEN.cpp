#include<bits/stdc++.h>
using namespace std;

//int main(){
//	int t;
//	cin >> t;
//	while (t--){
//		int n, x;;
//		cin >> n >> x;
//		int a[n+3];
//		for (int i=1;i<=n;i++){
//			cin >> a[i];
//		}
//		auto it = lower_bound(a+1,a+n+1,x)-a;
//		if (it == (1+n)){
//			cout<<-1;
//		}
//		else {
//			cout<<upper_bound(a+1,a+n+1,x)-lower_bound(a+1,a+n+1,x);
//		}
//		cout<<endl;
//	}
//}

int main(){
	int t;
	cin >> t;
	while (t--){
		int n, x;;
		cin >> n >> x;
		int a[n+3];
		map<int,int> mp;
		for (int i=1;i<=n;i++){
			cin >> a[i];
			mp[a[i]]++;
		}
		if (mp[x]!=0) cout<<mp[x]<<endl;
		else cout<<-1<<endl;
	}
}
