#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n+1];
	for (int i=0;i<n;i++) cin >> a[i];
	int duong=0;
	int am=0;
	int khong=0;
	sort(a,a+n);
	duong = n-(lower_bound(a,a+n,1)-a)+1;
	if (binary_search(a,a+n,0)==true) khong = (lower_bound(a,a+n,1)-a)-(lower_bound(a,a+n,0)-a)+1;
	am=n-duong-khong;
	if (n==3 || am == n){
		cout<<a[0]*a[1]*a[2]<<endl;
	}
	else if (khong!=0 && duong==0) {
		cout<<0<<endl;
	} else if (am==0 ||(khong+duong >=3 && am==1)){
		cout<<a[n-1]*a[n-2]*a[n-3];
	} else {
		cout<<max(a[0]*a[1]*a[n-1],a[n-1]*a[n-2]*a[n-3]);
	} 
}

