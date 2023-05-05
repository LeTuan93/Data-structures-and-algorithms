#include<bits/stdc++.h>
using namespace std;

const int mod=1e9+7;
int c[1005][1005];
long long CKN(long long n,long long k ){
	if (c[n][k]!=-1) return c[n][k]%mod;
	if (k==0 || k==n) return c[n][k]=1;
	if (n<k) return  c[n][k]=0;
	c[n][k]=( CKN(n-1,k)%mod+CKN(n-1,k-1)%mod ) % mod;
	return c[n][k]%mod;
}

int main(){
	int t;
	cin >> t;
	memset(c,-1,sizeof(c));
	while (t--){
		long long n,k;
		cin >> n >> k;
		cout<<CKN(n,k)<<endl;
	}
}
