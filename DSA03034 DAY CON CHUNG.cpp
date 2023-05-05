#include<bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int a1,b1,c1;
		cin >> a1 >> b1 >> c1;
		int a[a1+1],b[b1+1],c[c1 +1];
		vector<int > x,y,z;
		for (int i=0;i<a1;i++) {
			cin >>a[i];
			x.push_back(a[i]);
		}
		for (int i=0;i<b1;i++){
			cin >>b[i];
			y.push_back(b[i]);
		}
		for (int i=0;i<c1;i++) {
			cin >>c[i];
			z.push_back(c[i]);
		}
		sort(x.begin(),x.end());
		sort(y.begin(),y.end());
		sort(z.begin(),z.end());
		int check=0;
		for (int i=0;i<x.size();i++){
			if (binary_search(y.begin(),y.end(),x[i]) && binary_search(z.begin(),z.end(),x[i]) ){
				check=1;
				auto it1= lower_bound(y.begin(),y.end(),x[i]);
				auto it2= lower_bound(z.begin(),z.end(),x[i]);
				y.erase(it1);
				z.erase(it2);
				cout<<x[i]<<" ";
			}
		}
		if (check==0) cout<<"NO";
		cout<<endl;
	}
}
