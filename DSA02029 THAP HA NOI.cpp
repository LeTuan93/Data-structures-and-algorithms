#include<bits/stdc++.h>
using namespace std;

void backtrack(int i , char a , char b , char c){
	if (i == 1){
		cout <<a<<" -> "<<c<<endl;
	}
	else{
	    backtrack(i-1,a,c,b);
	    backtrack(1,a,b,c);
	    backtrack(i-1,b,a,c);
	}
}


int main(){
	int n;
	cin >> n;
	char a='A',b='B',c='C';
	backtrack(n,a,b,c);
}
