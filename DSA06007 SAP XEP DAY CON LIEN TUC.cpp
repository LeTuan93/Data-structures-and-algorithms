#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin>> n;
		int a[n+1];
		int b[n+1];
		for (int i=1;i<=n;i++) {
			cin >> a[i];
			b[i]=a[i];
		}
		sort(a+1,a+n+1);
		int a1,b1;
		for (int i=1;i<=n;i++) 
			if (b[i]!=a[i]){
				a1=i;
				break;
			}
		for (int i=n;i>=1;i--) 
			if (b[i]!=a[i]){
				b1=i;
				break;
			}
		cout<< a1<< " "<<b1<<endl;
	}
}
