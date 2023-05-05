#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n,k;
		cin >> n>> k;
		int a[n+3];
		for (int i=1;i<=n;i++) cin >> a[i];
		sort(a+1,a+n+1);
		int lon=0, nho=0;
		lon = n-k;
		nho = k;
		if (nho>lon) swap(lon,nho);
		long long tong1=0,tong2=0;
		for (int i=1;i<=nho;i++){
			tong1+=a[i];
		}
		for (int i=nho+1;i<=n;i++){
			tong2+=a[i];
		}
		cout<<tong2-tong1<<endl;
	}
}
