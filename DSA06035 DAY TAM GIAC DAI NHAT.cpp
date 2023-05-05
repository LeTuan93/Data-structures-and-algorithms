#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n+1];
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		vector<int> v;
		int i=1;;
		if (a[i]> a[i+1]){
		     v.push_back(1);
		     while (a[i]>a[i+1] && i+1!=n) i++;
		}
		else if (a[i]==a[i+1]){
		     while (a[i]==a[i+1]) i++;
		}
		while (i!=n){
			v.push_back(i);
			while (a[i]<a[i+1] && i+1<=n)i++;
			int check=0;
			if (a[i]==a[i+1] && i+1<=n){
				v.push_back(i);
				while (a[i]== a[i+1] && i+1<=n) i++;
		          check=1;
			}
			if (check==1) {
			     v.push_back(i);
			     check=0;
			}
			while (a[i]>a[i+1] && i+1<=n) i++;
			if (a[i]==a[i+1] && i+1<=n){
				v.push_back(i);
				while (a[i]== a[i+1] && i+1<=n) i++;
			     check=1;
			}
			if (check==1) {
			     v.push_back(i);
			     check=0;
			};
		}
		if (a[i-1]!=a[i]) v.push_back(i);
		int m=1;
		if (v.size()!=0){
     		for (int i=0;i<v.size()-1;i++){
     			if (a[v[i]]!=a[v[i+1]]){
     				m=max(m,v[i+1]-v[i]+1);
     			}
     		}
		}
		cout<<m<<endl;
	}
}
