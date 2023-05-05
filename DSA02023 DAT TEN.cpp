#include<bits/stdc++.h>
using namespace std;

string a[1000];
int n,k;
int unused[100];
int vt;
void backtrack(int t,int cnt){
	for (int i=t;i<=vt;i++){
		if (unused[i]==0){
			unused[i]=1;
			if (cnt==k){
				for (int i=1;i<=vt;i++) {
					if (unused[i]==1) cout<<a[i]<<" ";
				}
				cout<<endl;
			}
			else backtrack(i+1,cnt+1);
			unused[i]=0;
		}
	}
}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> k;
	string s;
	set<string> st;
	for (int i=1;i<=n;i++){
		cin >> s;
		st.insert(s);
	}
	vt=1;
	n=st.size();
	for (auto x: st){
		a[vt]=x;
		vt++;
	}
	vt--;
	memset(unused,0,sizeof(int));
	backtrack(1,1);

}
