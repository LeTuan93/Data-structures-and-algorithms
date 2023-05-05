#include<bits/stdc++.h>
using namespace std;

long long a[52];


long long divideAndConque(long long n , long long k){
	if (k%2==1) return 1;
	if (k==a[n]/2) return n;
	if (k>a[n]/2) return divideAndConque(n-1,k-a[n]/2);
	if (k<a[n]/2) return divideAndConque(n-1,k);
}
int main(){
	int t;
	cin >>t;
	a[0]=1;
	for (int i=1;i<=50;i++){
		a[i]=a[i-1]*2;
	}
	while (t--){
		long long n,k;
		cin >> n >> k;
		cout<<divideAndConque(n,k)<<endl;		
	}
}
