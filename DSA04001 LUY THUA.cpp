#include<bits/stdc++.h>
using namespace std;

const int MOD=1e9+7;
long long powmod(long long x, long long y , long long mod){
	long long kq=1;
	while (y!=0){
		if (y%2==1){
			kq*=x;
			kq%=mod;
		}
		x*=x;
		x%=mod;
		y/=2;
	}
	return kq%mod;
}


int main(){
	int t;
	cin >> t;
	while (t--){
		long long n,k;
		cin >> n >> k;
		cout<<powmod(n,k,MOD)<<endl;
	}
}
