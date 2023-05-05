#include<bits/stdc++.h>
using namespace std;

queue<string > q;
int a[7],kq[7];
int dem[1000000];
string final;
void solve(){
     //chuyen hoa
     int save=stoi(q.front());
     int j=6;
     while (save!=0){
          a[j]=save%10;
          j--;
          save/=10;
     }
     //hinh vuong trai
     int tmp[7];
     tmp[1]=a[4];
     tmp[2]=a[1];
     tmp[3]=a[3];
     tmp[4]=a[5];
     tmp[5]=a[2];
     tmp[6]=a[6];
     string tmpstr="";
     for (int i=1;i<=6;i++) tmpstr+=to_string(tmp[i]);
     q.push(tmpstr);
     dem[stoi(tmpstr)]=dem[stoi(q.front())]+1;
     if (tmpstr==final) return;
     //cout<<tmpstr<<endl;
     //hình vuông ph?i
     int tmp2[7];
     tmp2[1]=a[1];
     tmp2[2]=a[5];
     tmp2[3]=a[2];
     tmp2[4]=a[4];
     tmp2[5]=a[6];
     tmp2[6]=a[3];
     string tmp2str="";
     for (int i=1;i<=6;i++) tmp2str+=to_string(tmp2[i]);
     q.push(tmp2str);
     dem[stoi(tmp2str)]=dem[stoi(q.front())]+1;
     if (tmp2str==final) return;
     q.pop();
     //cout<<tmp2str<<endl;
     solve();
}
int main(){
     ios_base::sync_with_stdio(0);
     cin.tie(NULL);
     cout.tie(NULL);
     int t;
     cin >> t;
     while (t--){
          string s;
          for (int i=1;i<=6;i++) cin >> a[i];
          for (int i=1;i<=6;i++) cin >> kq[i];
          for (int i=123456;i<=654321;i++) dem[i]=0;
          while (!q.empty()) q.pop();
          final="";
          for (int i=1;i<=6;i++) s+=to_string(a[i]);
          q.push(s);
          for (int i=1;i<=6;i++) final+=to_string(kq[i]);
          if (s==final) cout<<0<<endl;
          else{
               solve();
               cout<<dem[stoi(final)]<<endl;
          }
     }
}
