#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n+1];
	for (int i=1;i<=n;i++) cin >> a[i];
	int step=0;
	for (int i=1;i<=n-1;i++){
		int k=i;
		int j=i+1;
		for (j=i+1;j<=n;j++){
			if (a[k]>a[j]){
				k=j;
			}
		}
		swap(a[k],a[i]);
		step++;
		cout<<"Buoc "<<step<<": ";
		for (int i=1;i<=n;i++) cout<<a[i]<<" ";
		cout<<endl;
	}	
}
