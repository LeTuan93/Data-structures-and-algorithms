#include<bits/stdc++.h>
using namespace std;

int main(){
     int t;
     cin >>   t;
     int a[10]={1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
     while (t--){
          int n;
          cin >> n;
          int i=9;
          int cnt=0;
          while (n!=0){
               if (n>=a[i]){
                    int k = n/a[i];
                    n=n-k*a[i];
                    cnt+=k;
               } else i--;
          }
          cout<<cnt<<endl;
     }
}
