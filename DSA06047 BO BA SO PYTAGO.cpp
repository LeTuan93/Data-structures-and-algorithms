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
		unsigned long long a[n+1];
		for (int i=1;i<=n;i++) cin >> a[i];
		sort(a+1,a+n+1);
		int check=1;
		unsigned long long b[n+1];
		for (int i=1;i<=n;i++){
			a[i]=pow(a[i],2);
		}
		for (int i=1;i<=n;i++){
               for (int j=i+1;j<=n;j++){
                    auto it=lower_bound(a+1,a+n+1,a[i]+a[j])-a;
                    if (it !=(n+1) && a[it]== a[i]+a[j]) check=0;
               }
		}
		if (check == 1) cout<<"NO";
		else cout<<"YES";
		cout<<endl;
	}
}
