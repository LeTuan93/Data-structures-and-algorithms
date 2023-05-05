#include<bits/stdc++.h>
using namespace std;
 
string s;
 vector<string > v;
 int n ,k ;
 string cmp="";
void backtrack(int i){
     for (int j=0; j <= 1; j++ ){
          if (j == 0) s+='A';
          else s+='B';
          if (i == n){
               if (s.find(cmp)!=-1 && s.find(cmp+"A")==-1) {
                    v.push_back(s);
               }
          }
          else backtrack(i+1);
          s.erase(s.size()-1,1);
     }
} 
 
int main(){
     cin >> n >> k;
     s="";    
     for (int i=0;i<k;i++) cmp+="A";
     backtrack(1);
     cout<<v.size()<<endl;
     for (auto x: v){
          cout << x << endl;
     }
} 
