#include<bits/stdc++.h>
using namespace std;

int xausangso(string s){
	int ans=0;
	for (int i=0;i<s.size();i++){
		ans=ans*10+(s[i]-'0');
	}
	return ans;
}

int main(){
	int n;
	cin  >> n;
	cin.ignore();
	int c[n+2][n+2]={};
	for(int i=1;i<=n;i++){
		string s;
		getline(cin,s);
		stringstream ss(s);
		string tmp;
		while (ss >> tmp){
			int y = xausangso(tmp);
			c[i][y]=1;
			c[y][i]=1;
		}
	}
	for (int i=1;i<=n;i++){
		for (int j=1;j<=n;j++){
			cout<<c[i][j]<<" ";
		}
		cout<<endl;
	}
}
