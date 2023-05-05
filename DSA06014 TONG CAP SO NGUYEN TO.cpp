#include<bits/stdc++.h>
using namespace std;


int checknt(int i){
	if (i<2)
		return 0;
	if (i== 2 || i == 3)
		return 1;
	for (int j=2;j<=sqrt(i);j++){
		if (i%j==0) return 0;
	}
	return 1;
}

int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		int tmp=n/2;
		if (n%2==1) tmp++;
		int check=0;
		for (int i=2;i<=tmp;i++){
			if (checknt(i)==1 && checknt(n-i)==1){
				cout<<i<<" "<<n-i<<endl;
				check=1;
				break;
			}
		}
		if (check==0) cout<<-1<<endl;
	}
}
