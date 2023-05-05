#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		long long a[n+5];
		for (int i=1;i<=n;i++) cin >> a[i];
		long long ans=INT_MIN;
		stack<long long> st;
		for (int i=1;i<=n;i++){
			if (st.size()==0 || a[i]>=a[st.top()] )  st.push(i);
			else{
				while (st.size()!=0 && a[i]<a[st.top()] ){
					long long hight = st.top();
					st.pop();
					if (st.size()!=0) ans = max(ans, (i-st.top()-1)*a[hight]);
					else ans = max(ans, (i-1)*a[hight]);
				}
				st.push(i);
			}
		}
		while (st.size()!=0 ){
			long long hight = st.top();
			st.pop();
			if (st.size()!=0) ans = max(ans, (n+1-st.top()-1)*a[hight]);
			else ans = max(ans, n*a[hight]);
		}
		cout<<ans<<endl;
	}
}
