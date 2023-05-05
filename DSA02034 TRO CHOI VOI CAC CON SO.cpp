#include<bits/stdc++.h>
using namespace std;


vector<string> v;
string s="";
char x;
int unused[150];
int n;
void backtrack(int i,int unused[],string s){
	for (int j=1;j<=n;j++){
		if (unused[j]==0){
			s+=to_string(j);
			unused[j]=1;
			if (i == n){
				int check = 0;
				for (int k=0;k<s.size()-1;k++){
					if (abs(((int)s[k]-48)-((int)s[k+1]-48))==1 || s[k]=='0' || s[k+1]=='0') check=1;
				}
				if (check == 0 ) v.push_back(s);
				//cout<<check<<endl;
			}
			else backtrack(i+1,unused,s);
			s.erase(s.size()-1,1);
			unused[j]=0;
		}
	}
}

int main(){
	int t;
	cin >> t;
	while ( t -- ){
		cin >> n;
		for (int i=0;i<150;i++){
			unused[i]=0;
		}
		v.clear();
		s="";
		backtrack(1,unused,s);
		for (auto x : v){
			cout<<x<<endl;
		}
	}
}
