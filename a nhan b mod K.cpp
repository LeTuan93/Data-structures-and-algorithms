#include<bits/stdc++.h>
using namespace std;
long long asterisk (long long a,long long b, long long k){
    if(b==0) return 0;
    long long res=0;
    while(b){
    	if(b%2!=0){
    		res+=a;
    		res%=k;
		}
		a*=2;
		a%=k;
		b/=2;
	}
	return res;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long m,n,k;
		cin>>m>>n>>k;
		cout<<asterisk(m,n,k)<<endl;
	}
}