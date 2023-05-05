#include<bits/stdc++.h>
using namespace std;

struct point{
	int a,b;
};
bool cmp(point x, point y){
	return x.b<y.b;
}

int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		point p[n+1];
		for (int i=0;i<n;i++){
			cin >> p[i].a >> p[i].b;
		}
		sort(p,p+n,cmp);
		int k=0;
		int cnt=0;
		for (int i=0;i<n;i++){
			if(p[i].a>=k){
				k=p[i].b;
				cnt++;
			} 
		}
		cout<<cnt<<endl;
	}
}
