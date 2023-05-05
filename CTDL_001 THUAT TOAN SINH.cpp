#include<bits/stdc++.h>
using namespace std;

int a[1000];
int n;

bool checkdx(){
	int final=n;
	int i=1;
	while (a[i]==a[final]){
		i++;
		final--;
		if (i>n && final==0) return true;
	}
	return false;
	
}
void sinhnp_UsingSinhKeTiep(){
	while (1){
		int vt=n;
		while (a[vt]==1) vt--;
		if (vt==0) break;
		a[vt]++;
		for (int i=vt+1;i<=n;i++) a[i]=0;
		if (checkdx()==true) {
			for (int i=1; i<=n;i++) cout << a[i]<<" ";
			cout<<endl;
		}
	}
}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> n;
	for (int i=1;i<=n;i++) cout<< a[i]<<" ";
	cout<<endl;
	sinhnp_UsingSinhKeTiep();
}