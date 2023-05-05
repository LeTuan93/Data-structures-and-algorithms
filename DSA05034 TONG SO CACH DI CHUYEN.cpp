#include<bits/stdc++.h>
using namespace std;

const int mod = 1e9+7;

long long Try(long long n,long long k){
	long long a[100005];
	a[0]=1;
	long long sum=0;
	for (int i=1;i<=n;i++){
		if (i<=k){
			sum=(sum+a[i-1])%mod;
			a[i]=sum;
		}
		else{
			a[i]=(2*a[i-1]-a[i-k-1]+mod)%mod;
		}
	}
	return a[n];
}

int main(){
	int t;
	cin >>t ;
	while (t--){
		long long n,k;
		cin >> n >>k;
		cout<<Try(n,k)<<endl;
	}
}
