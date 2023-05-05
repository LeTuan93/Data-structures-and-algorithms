#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,i,j,s=0,max=0;
		cin>>n;
		int a[n][n];
		for(i=0;i<n;++i)   for(j=0;j<n;++j) {
			cin>>a[i][j];
			s+=a[i][j];
		}
		for(i=0;i<n;++i) {
			int dem=0;
			for(j=0;j<n;++j) dem+=a[i][j];
			if(dem>max) max=dem;
		}
		for(i=0;i<n;++i) {
			int dem=0;
			for(j=0;j<n;++j) dem+=a[j][i];
			if(dem>max) max=dem;
		}
		cout<<max*n-s<<endl;
	}
}