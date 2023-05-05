#include<bits/stdc++.h>
using namespace std;

const long long MOD=1e9+7;
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

long long powmod2(long long n, long long k,long long mod)
{
    if (k == 0)
        return 1;
    long long x = powmod2(n, k / 2,MOD);
    if (k % 2 == 0)
        return (x * x) % mod;
    else
        return (((x * x) % mod) * n) % mod;
}
int main(){
	int t;
	cin >> t;
	while (t--){
		long long n;
		cin >> n ;
		long long k=0;
		long long n1=n;
		while (n1!=0){
			k=k*10+n1%10;
			n1/=10;
		}
		cout<<powmod2(n,k,MOD)<<endl;
	}
}
