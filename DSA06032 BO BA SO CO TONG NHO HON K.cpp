#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main(){
		ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--){
		int n,k;
		cin >> n >> k;
		long long a[n+1];
		for (int i=1;i<=n;i++) {
			cin >> a[i];
		}
		sort(a+1,a+n+1);
		long long cnt=0;
		for (int i=1;i<=n;i++) {
			for (int j=i+1;j<=n;j++){
				long long it =lower_bound(a+j+1,a+n+1,k-a[i]-a[j])-a;
				cnt+=it-j-1;			
			}
		}
		cout<<cnt<<endl;
	}
}
