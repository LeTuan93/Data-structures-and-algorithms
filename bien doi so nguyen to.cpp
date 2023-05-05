#include<bits/stdc++.h>
using namespace std;
int check[10005]={0},val[10005];
vector < int > ds[10005];
vector<int> prime;
void ngto() {
	for(int i = 2; i<10000;++i) if(!check[i]) for(int j = 2*i;j<10000;j+=i) check[j]= 1;
	for(int i = 1000;i<10000;++i) if(!check[i]) prime.push_back(i);
}
int result (int a,int b) {
	int dem=0;
	while(a&&b) {
		int m = a%10 , n = b%10;
		if(m!=n) ++dem;
		a/=10; b/=10;
	}
	return dem==1;
}
void prime1 () {
	for(int i = 0; i<prime.size();++i) for(int j = i+1;j<prime.size();++j) if(result(prime[i],prime[j])) {
		ds[prime[i]].push_back(prime[j]);
		ds[prime[j]].push_back(prime[i]);
	}
}
int main(){
	int t,a,b;
	cin >> t;
	ngto();
	prime1();
	while(t--){
		memset(val,0,sizeof(val));
		cin >> a>>b;
		queue<int> q;
		q.push(a);
		while(1) {
			int x= q.front();
			q.pop();
			if(x==b) {
				cout<<val[b]<<endl;
				break;
			}
			for(auto y:ds[x]) if(!val[y]) {
				val[y]= val[x]+1;
				q.push(y);
			}
		}
	}
}