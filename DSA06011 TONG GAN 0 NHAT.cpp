#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n ;
		int a[n+1];
		for (int i=1;i<=n;i++) cin >> a[i];
		sort(a+1,a+n+1);
		long long key=LONG_LONG_MAX;
		for (int i=1;i<=n-1;i++){
				auto it = upper_bound(a+i,a+n+2,0-a[i])-a;
				//cout<< it<<" "<<i<<endl;				
				if (it == (n+2)){
					it--;
				}
				//cout<<abs(a[it]+a[i])<<endl;
				if (abs(key)>=abs(a[it]+a[i])) {
					key = a[it]+a[i];			
				}
				//cout<<key<<endl;
		}
		cout<<key<<endl;
	}
}
