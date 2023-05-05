#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n+1];
	for (int i=1;i<=n;i++) cin >> a[i];
	stack<string> s;
	for (int i=1;i<=n;i++){
		int k=i;
		while (k!=1 && a[k]<a[k-1]){
			swap(a[k],a[k-1]);
			k--;
		}
		string tmp="Buoc "+to_string(i-1)+": ";
		for (int j=1;j<=i;j++){
			tmp=tmp+to_string(a[j])+" ";
		}
		s.push(tmp);
	}
	while (s.size()!=0){
		cout<<s.top()<<endl;
		s.pop();
	}
}
