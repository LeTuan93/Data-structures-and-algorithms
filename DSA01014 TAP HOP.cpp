#include<bits/stdc++.h>
using namespace std;

long long ans=0;
int n,k,s;
int a[1000];

void backtrack_np(int k1){
	for (int i=0;i<=1;i++){
		a[k1]=i;
		if (k1==n){
			int cnt=0;
			long long tong=0;
			for (int i=1;i<=n;i++){
				if (a[i]==1) {
					cnt++;
					tong+=i;
				}
			}
			if (cnt==k && tong==s){
				ans++;
			}
		}
		else backtrack_np(k1+1);
	}
}

int main(){
	while (true){
		cin >> n >>k >> s;
		if (n==0 && k ==0 && s==0) break;
		ans=0;
		memset(a,0,sizeof(a));
		backtrack_np(1);
		cout<<ans<<endl;
	}
}
