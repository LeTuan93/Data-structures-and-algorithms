#include<bits/stdc++.h>
using namespace std;
const long long N=LONG_LONG_MAX;
int visited[1005][1005];
int dx[8]={1,2,2,1,-1,-2,-2,-1},dy[8]={2,1,-1,-2,2,1,-1,-2};
int n;
int t1,t2,t3,t4;
int check;
int x;
queue<pair<pair<int,int>,int>> q;
void bfs(int i,int j){
     q.push({{i,j},x});
     while (!q.empty()){
          if (check==1) return;
          pair<pair<int,int>,int> top=q.front();
          q.pop();
          top.second+=1;
          for (int k=0;k<8;k++){
               if (check==1) return;
               int i1=top.first.first+dx[k];
               int j1=top.first.second+dy[k];
               if ( i1>=1 && j1>=1 && i1<=8 && j1<=8 && visited[i1][j1]==0){
                    x=top.second;
                    q.push({{i1,j1},x});
                    //cout<<i1<<" "<<j1<<" "<<x<<endl;
                    visited[i1][j1]=1;
                    if (i1==t3 && j1==t4)  {
                         check=1;
                         return ;
                    }
               }
          }
          if (check==1) return;
     }
}
int main()
{
     ios_base::sync_with_stdio(0);
     cin.tie(NULL);
     cout.tie(NULL);
     int t;
     cin >>t;
     cin.ignore();
     string s1,s2;
     while (t--){
          check=0;
          memset(visited,0,sizeof(visited));
          cin >> s1 >> s2;
          t1=(int)(s1[0]-96);
          t2=s1[1]-'0';
          t3=(int)(s2[0]-96);
          t4=s2[1]-'0';
          if (t1==t3 && t2==t4) cout<<0<<endl;
          else{
               x=0;
               while (!q.empty()) q.pop();
               bfs(t1,t2);
               cout<<x<<endl;
          }
     }
     
}
