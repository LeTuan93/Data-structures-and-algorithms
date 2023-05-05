#include<bits/stdc++.h>
using namespace std;
  
int a[100];
void backtrack(int k){
	if (k>8) return;
	for (int i=0;i<=1;i++){
		a[k]=i;
		if (k==8){
			if ( (a[2]==1 || a[1]==1) && a[4]==1 && a[5]==1  && a[3] == 0 ){
				for (int i=1;i<=2;i++){
					if (a[i]==1) cout<<2;
					else  cout<<0;
				}
				cout<<"/";
				for (int i=3;i<=4;i++){
					if (a[i]==1) cout<<2;
					else  cout<<0;
				}
				cout<<"/";
				for (int i=5;i<=8;i++){
					if (a[i]==1) cout<<2;
					else  cout<<0;
				}
				cout<<endl;
			}
		}
		else backtrack(k+1);
	}
} 
int main()
{
     ios_base::sync_with_stdio(0);
     cin.tie(NULL);
     cout.tie(NULL);
	 backtrack(1);
}
