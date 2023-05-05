#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n+1];
	for (int i=1;i<=n;i++) cin >> a[i];
	int step=0;
	for (int i=1;i<=n-1;i++){
		for (int j=i+1;j<=n;j++){
			if (a[i]>a[j]){
				swap(a[i],a[j]);
			}
		}
		step++;
		cout<<"Buoc "<<step<<": ";
		for (int i=1;i<=n;i++) cout<<a[i]<<" ";
		cout<<endl;
	}	
}
