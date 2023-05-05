#include<bits/stdc++.h>
using namespace std;


const long long MOD=1e9+7;

int main(){
	int t;
	cin >>t;
	while (t--){
		int n;
		cin >> n;
		int a[n+1];
		for (int i=1;i<=n;i++) cin >> a[i];
		sort(a+1,a+n+1);;
		long long tong=0;
		for (int i=1;i<=n;i++){
			tong=(tong%MOD)+(a[i]%MOD*(i-1)%MOD)%MOD;
			tong%=MOD;
		}
		cout<<tong%MOD<<endl;		
	}
}
