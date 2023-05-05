#include <bits/stdc++.h>
using namespace std;
int  check[20005];
int val(int a, int b)  {
	queue<int> q;
	q.push(a);
	while(!q.empty()){
		int x = q.front();
		q.pop();
		if(x==b) break;
		if(!check[x-1]&&x-1>0) {
			q.push(x-1);
			check[x-1] = check[x]+1;
		}
		if(!check[x*2]&&x<b) {
			q.push(x*2);
			check[x*2] = check[x]+1;
		}
	}
	if(check[b]) return check[b];
	return 1;
}
int main(){
	int t ,a , b;
	cin>>t;
	while(t--){
		memset(check,0,sizeof(check));
		cin >> a>>b;
		cout<<val(a,b)<<endl;
	}
}