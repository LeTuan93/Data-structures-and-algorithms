#include<bits/stdc++.h>
using namespace std;


const long long MOD=1e9+7;

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
	while (true){
		long long a,b;
		cin >> a>> b;
		if (a==0 && b==0) break;
		cout<<modpow(a,b,MOD)<<endl;
	}
}
