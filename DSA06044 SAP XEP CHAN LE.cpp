#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[n+1];
	vector<int > c;
	vector<int> l;
	for (int i=1;i<=n;i++) {
		cin >> a[i];
		if (i%2==1){
			l.push_back(a[i]);
		}
		else c.push_back(a[i]);
	}
	sort(c.begin(),c.end(),greater<int>());
	sort(l.begin(),l.end());
	int i=0,j=0;
	while (1){
		if (i<=l.size()-1) {
			cout<<l[i]<<" ";
			i++;
		}
		if (i>l.size()-1 && j>c.size()-1) break;
		if (j<=c.size()-1) {
			cout<<c[j]<<" ";
			j++;
		}
	}
}
