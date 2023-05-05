#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int m, n;
		cin >> m >> n;
		int a[m][n];
		int hang[m] = {0}, cot[n] = {0};
		for(int i = 0; i < m; i++){
			for(int j = 0; j < n; j++){
				cin >> a[i][j];
				hang[i] += a[i][j];
			}
		}
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cot[i] += a[j][i];
			}
		}
		for(int i = 0; i < m; i++){
			for(int j = 0; j < n; j++){
				if(hang[i] == 0 && cot[j] == 0) cout << "0 ";
				else cout << "1 ";
			}
			cout << endl;
		}
	}
}