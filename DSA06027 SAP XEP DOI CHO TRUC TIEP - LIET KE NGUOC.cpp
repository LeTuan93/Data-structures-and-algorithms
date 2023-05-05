#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		int a[n+1];
		for (int i=1;i<=n;i++) cin >> a[i];
		stack<string> s;
		for (int i=1;i<=n-1;i++){
			for (int j=i+1;j<=n;j++){
				if (a[i]>a[j]){
					swap(a[i],a[j]);
				}
			}
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
		cout<<endl;
	}
}
