#include<bits/stdc++.h>
using namespace std;


const long long MOD=123456789;

long long modpow(long long n , long long k,long long mod){
	long long res =1;
	while (k!=0){
		if (k%2==1){
			res*=n;
			res%=mod;
		}
		n*=n;
		n%=mod;
		k/=2;
	}
	return res%mod;
}

int main(){
	int t;
	cin >>t;
	while (t--){
		long long n;
		cin >> n;
		cout<<modpow(2,n-1,MOD)<<endl;
	}
}
