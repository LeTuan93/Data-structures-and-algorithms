#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	long long a[n+1];
	for (int i=0;i<n;i++) cin >> a[i];
	long long mx[n+1];
	for (int i=0;i<n;i++) mx[i]=1;
	long long kq=1;
	for (int i=0;i<n;i++){
			for (int j=0;j<i;j++){
				if (a[i]>a[j]) mx[i]=max(mx[j]+1,mx[i]);
			}
	}
	cout<<*max_element(mx,mx+n);
}
