#include<bits/stdc++.h>
using namespace std;


vector<string> v;
string s="";
char x;
int y;

void backtrack(int i){
	for (int j=65;j<=(int)x;j++){
		if (s[s.size()-1]>(char)j) continue;
		s+=(char)j;
		if (i==y){
			v.push_back(s);
		}
		else backtrack(i+1);
		s.erase(s.size()-1,1);
	}
}

int main(){
	cin >> x >> y;
	backtrack(1);
	for (auto x: v){
		cout<< x<<endl;
	}
}
