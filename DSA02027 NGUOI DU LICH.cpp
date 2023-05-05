#include<bits/stdc++.h>
using namespace std;


long long cmin = LONG_LONG_MAX;
long long c[1005][1005];
int unused[1000];
int x[1000];
long long s=0;
long long ans=LONG_LONG_MAX;
	int n;
	
void Try(int i){
	if (s+ cmin*(n-i+1)>=ans ) return;
	for (int j=1;j<=n;j++){
		if (unused[j]==0){
			unused[j]=1;
			x[i]=j;
			s+=c[x[i-1]][j];
			if (i==n){
				if (s+c[x[n]][x[1]] < ans){
					ans= s+c[x[n]][x[1]];
				}
			}
			else Try(i+1);
			unused[j]=0;
			s-=c[x[i-1]][j]; 
		}
	}
}

int main(){
	cin >> n;
	for (int i=1;i<=n;i++){
		for (int j=1;j<=n;j++){
			cin >> c[i][j];
			if (c[i][j]!=0) cmin = min(cmin,c[i][j]);	
		}
	}
	memset(unused,0,sizeof(unused));
	unused[1]=1;
	x[1]=1;
	Try(2);
	cout<<ans;
}
