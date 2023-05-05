#include<bits/stdc++.h>
using namespace std;

long long f[105];

long long Try(long long n,long long k){
	if (n==1) return 0;
	if (n==2) return 1; 
	if (k>f[n-2]) return Try(n-1,k-f[n-2]);
	else return Try(n-2,k);
}

long long fib(long long i){
	if (f[i]!=-1) return f[i];
	if (i==1 || i==2) return f[i]=1;
	f[i]=fib(i-2)+fib(i-1);
	return f[i];
}

int main(){
	int t;
	cin >> t;
	for (int i=0;i<=92;i++) f[i]=-1;
	long long x=fib(92);
	while (t--){
		long long n,k;
		cin >> n >> k;
		cout<<Try(n,k)<<endl;
	}
}
