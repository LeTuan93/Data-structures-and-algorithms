#include<bits/stdc++.h>
using namespace std;


#include<bits/stdc++.h>
using namespace std;

int x[100],t;
int n;
int unused[100];
vector<int> p;

void hoanvi2(int i){
     for (int j=1;j<=p.size();j++){
          if (!unused[j]){
               unused[j]=1;
               x[i]=j;
               if (i==p.size()){
               		int tmp=0;
                    for (int i=1;i<=p.size();i++) tmp=tmp*10+p[x[i]-1];
                    cout<<tmp<<endl;
               }
               else hoanvi2(i+1);
               unused[j]=0;
          }
     }
}

int main(){
	cin >> t;
	while (t--){
		for (int i=0;i<100;i++) unused[i]=0;
		cin >> n;
		p.clear();
		while (n!=0){
			int e=n%10;
			p.push_back(e);
			n/=10;
		}
		sort(p.begin(),p.end());
		hoanvi2(1);
	}
}

