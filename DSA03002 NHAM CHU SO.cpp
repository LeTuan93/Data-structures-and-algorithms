#include<bits/stdc++.h>
using namespace std;

int chuyenDoi(string x){
	int kq=0;
	for (int i=0;i<x.size();i++){
		kq=kq*10+(x[i]-'0');
	}
	return kq;
}


int main(){
     int a,b;
     cin >> a >> b;
     string x=to_string(a);
     string y=to_string(b);
     for (int  i=0;i<x.size();i++){
     	if (x[i]=='6') x[i]='5';
	 }
	 for ( int i=0;i<y.size();i++){
     	if (y[i]=='6') y[i]='5';
	 }
	int kq2= chuyenDoi(x)+chuyenDoi(y);
	     for (int  i=0;i<x.size();i++){
     	if (x[i]=='5') x[i]='6';
	 }
	 for ( int i=0;i<y.size();i++){
     	if (y[i]=='5') y[i]='6';
	 }
	 int kq1= chuyenDoi(x)+chuyenDoi(y);
     cout<< kq2<<" "<<kq1;
}
