#include<bits/stdc++.h>
using namespace std;

int a[15];
int n;

void backtrack_np(int k){
	for (int i=0;i<=1;i++){
		a[k]=i;
		if (k == n){
			cout<<a[1];
			for (int i=2;i<=n;i++){
				if (a[i-1]!=a[i]) cout<<"1";
				else cout<<"0";
			}
			cout<<" ";
		}else{
			backtrack_np(k+1);
		}
	}
}
int main(){
	int t;
	cin >>t ;
	while (t--){
		cin >> n;
		backtrack_np(1);
		cout<<endl;
	}
}
