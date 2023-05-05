#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		stack<int> st;
		int r[n+2];
		int a[n+2];
		for (int i=0;i<n;i++) r[i]=-1;
		for (int i=0;i<n;i++)
			cin >> a[i];
		for (int i=0;i<n;i++){
			if (st.size()==0){
				st.push(i);
			}else {
				while (st.size()!=0 && a[i]>a[st.top()]){
					r[st.top()]=a[i];
					st.pop();
				}
				st.push(i);
			}
		}
		for (int i=0;i<n;i++){
			cout << r[i]<<" ";
		}	
		cout<<endl;
	}
}
