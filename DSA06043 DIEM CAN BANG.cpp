#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define endl "\n";
int main(){
     faster();
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n+1];
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		int b[n+1],c[n+1];
		b[1]=a[1];
		for (int i=2;i<=n;i++){
			b[i]=a[i]+b[i-1];
		}
		c[n]= a[n];
		for (int i=n-1;i>=1;i--){
			c[i]=a[i]+c[i+1];
		}
		int check=0;
		for (int i=1;i<=n-2;i++){
			if (b[i]==c[i+2]){
				cout<<i+1;
				check=1;
				break;
			}
		}
		if (check==0) cout<<-1;
		cout<<endl;
	}
}
