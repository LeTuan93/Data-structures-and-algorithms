#include<bits/stdc++.h>
using namespace std;



long long Try(long long n , long long k){
	long long a[100005];
	memset(a,0,sizeof(a));
	a[0]=1;
	long long sum=0;
	for (int i=1;i<=n;i++)
	{
		if (i<=k){
			sum+=a[i-1];
			a[i]=sum;
		}
		else{
			a[i] = 2*a[i-1]- a[i-k-1];
		}
	}
	return a[n];
}

int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		cout<<Try(n,3)<<endl;
	}
}
