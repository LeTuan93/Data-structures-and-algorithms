#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		int a[n+1];
		for (int i=1;i<=n;i++) cin >> a[i];
		vector<pair<int,int>> v(n+1);
		for (int i=1;i<=n;i++){
			v[i].first=a[i];
			v[i].second=i;
			
		}
		sort(v.begin(),v.end());
		int kq=-1;
		for (int i=1;i<=n;i++){
			for (int j=n;j>=1;j--){
				if (v[j].first>a[i]){
					kq=max(kq,v[j].second-i);
				}
				else break;
			}
		}
		cout<<kq<<endl;
	}
}
