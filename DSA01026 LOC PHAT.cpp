#include<bits/stdc++.h>
using namespace std;



int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	string a[n+5];
	a[1]="8";
	for (int i=2;i<=n;i++) a[i]="6";
	while (1){
		int vt=n;
		while (a[vt]=="8") vt--;
		if (vt<1) break;
		a[vt]="8";
		for (int i=vt+1;i<=n;i++) a[i]="6";
		int check=1;
		if (a[0]=="6" || a[n]=="8") check=0;
		for (int i=1;i<=n-1;i++){
			if (a[i]==a[i+1] && a[i]=="8") check=0;
		}
		for (int i=1;i<=n-3;i++){
			if (a[i]==a[i+1] && a[i]==a[i+2] && a[i]==a[i+3] && a[i]=="6") check=0;
		}
		
		if (check==1) {
			for (int i=1;i<=n;i++) cout<<a[i];
			cout<<endl;
		}
	}
}
	
