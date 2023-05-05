#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n+1];
	for (int i=1;i<=n;i++){
		cin >> a[i];
	}
	int step=0;
	for (int i=1;i<=n;i++){
		int k=i;
		while (k!=1 && a[k]<a[k-1]){
			swap(a[k],a[k-1]);
			k--;
		}
		cout<<"Buoc "<<i-1<<": ";
		for (int j=1;j<=i;j++){
			cout<<a[j]<<" ";
		}
		cout<<endl;
	}
}
