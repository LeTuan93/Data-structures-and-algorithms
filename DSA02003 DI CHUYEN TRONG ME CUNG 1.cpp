#include<bits/stdc++.h>
using namespace std;

string s;
int a[12][12];
int n;
int ck;
void backtrack(int c,int d,string s){
	//cout<<s<<" "<<c<<" "<<d<<endl;
	if (c==n && d==n) {
		cout<<s<<" ";
		ck=1;
		return;
	}
	if (a[c+1][d]==1){
		backtrack(c+1,d,s+"D");
	}
	if (a[c][d+1]==1) {
		backtrack(c,d+1,s+"R");
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while (t--){
		cin >> n;
		for (int i=1;i<=n;i++){
			for (int j=1;j<=n;j++){
				cin >> a[i][j];
			}
		}
		s="";
		ck=0;
		if (a[1][1]==1) backtrack(1,1,s);
		if (ck==0) cout<<-1;
		cout<<endl;
	}	
}
