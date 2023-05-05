#include<bits/stdc++.h>
using namespace std;

int a[100];
int b[100];
int n,k;
int tong;
int check;
void backtrack(int j){
	if (j>n || tong > k) return;
	for (int i=1;i>=0;i--){
		b[j]=i;
		tong+=i*a[j];
		//cout<<tong<<endl;
		if (j==n){
			if (tong==k){
				check=1;
				cout<<"[";
				int vt=n;
				while (b[vt]==0) vt--;
				for (int i=1;i<=n;i++){
					if (b[i]==1) {
						cout<<a[i];
						if (i!=vt) cout<<" ";
					}
				}
				cout<<"] ";
			}
		}
		else backtrack(j+1);
		tong-=i*a[j];
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while (t--){
		cin >> n >> k;
		for (int i=1;i<=n;i++) cin >> a[i];
		sort(a+1,a+n+1);
		memset(b,0,sizeof(int));
		tong=0;
		check=0;
		backtrack(1);
		if (check==0) cout<<-1;
		cout<<endl;
	}
}
