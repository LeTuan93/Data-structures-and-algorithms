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
		
		bool ok = false;
		
		for (int j=1;j<=n-1;j++){
			if(a[j]>a[j+1]){
				swap(a[j],a[j+1]);
				ok =true;
			}
		}
		if (ok == false) break;
		step++;
		cout<<"Buoc "<<step<<": ";
		for (int i=1;i<=n;i++) cout<<a[i]<<" ";
		cout<<endl;
	}
}
