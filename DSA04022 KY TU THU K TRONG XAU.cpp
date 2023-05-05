#include<bits/stdc++.h>
using namespace std;

char c[27];
long long a[60];
char Try(long long n , long long k){
	//cout<<n<<" "<<k<<endl;
	if (a[n]/2==k) return c[n];
	else if (a[n]/2-1>=k) return Try(n-1,k);
	else return Try(n-1,k-a[n]/2);
}

int main(){
	int t;
	cin >> t;
	for (int i=1;i<=26;i++){
		c[i]=(char)(64+i);
	}
	a[1]=2;
	for (int i=2;i<=50;i++){
		a[i]=a[i-1]*2;
	}
	while (t--){
		long long n,k;
		cin >> n >> k;
		cout<<Try(n,k)<<endl;
	}
}
