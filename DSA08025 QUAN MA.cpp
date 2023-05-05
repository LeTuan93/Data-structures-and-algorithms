#include<bits/stdc++.h>
using namespace std;

int t1,t2,t3,t4;

int dx[]={2,1,-1,-2,-2,-1,1,2};
int dy[]={1,2,2,1,-1,-2,-2,-1};
int unused[10][10];
int ans;
void bfs(int i,int j){
	memset(unused,0,sizeof(unused));
	ans=0;	
	queue<pair<pair<int,int>,int>> q;
	unused[i][j]=1;
	q.push({{i,j},ans});
	while (q.size()!=0){
		pair<pair<int,int>,int> front = q.front();
		q.pop();
		for (int k=0;k<8;k++){
			int x = front.first.first  + dx[k];
			int y = front.first.second + dy[k];
			if (x>=1 && x<=8 && y>=1 && y<=8 && unused[x][y]==0 ){
				unused[x][y]=1;
				q.push({{x,y},front.second+1});
				if (x==t3 && y==t4){
					ans = front.second+1;
					return;
				}
			}
		}
	}
}

int main(){
	int t;
	cin >> t;
	while (t--){
		string s1,s2;
		cin >> s1 >> s2;
		t1 =(int)(s1[0]-96);
		t2 =s1[1]-'0';
		t3 =(int)(s2[0]-96);
		t4 =s2[1]-'0';
		if (t1==t3 && t2==t4){
			cout<<0<<endl;
		}
		else{
			bfs(t1,t2);
			cout<<ans<<endl;
		}
	}
}
