#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n+1];
	for (int i=1;i<=n;i++) cin >> a[i];
	stack<string> s;
	for (int i=1;i<=n-1;i++){
		int k=i;
		for (int j=i+1;j<=n;j++){
			if (a[k]>a[j]){
				k=j;
			}
		}
		swap(a[k],a[i]);
		string tmp="Buoc "+to_string(i)+": ";
		for (int j=1;j<=n;j++){
			tmp=tmp+to_string(a[j])+" ";
		}
		s.push(tmp);
	}
	while (s.size()!=0){
		cout<<s.top()<<endl;
		s.pop();
	}
}
