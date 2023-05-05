#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
int n,k,sum=0;
int a[100];
int ans = 0;
int bt(vi a, vi dd, vi s, int dem, int idx)
{   
    if (s[dem] == sum){
        if (dem == k-2) {return 1;}
        return bt(a, dd, s, dem + 1, n-1);
    }
    for (int i=idx;i>=0;i--){
        if (dd[i] == 1) continue;
        int tmp = s[dem] + a[i];
        if (tmp <= sum){
            dd[i] = 1;
            s[dem] += a[i];
            int m = bt(a, dd, s, dem, i-1);
            dd[i] = 0;
            s[dem] -= a[i];
            if (m==1) return 1;
        }
    }
    return 0;
}
 
int check(vi a){
    if (n < k) return 0;
    if (k == 1) return 1;
    if (sum%k!=0) return 0;
    sum /= k;
    vi s(k,0);
    vi dd(n,0);
    s[0] += a[n-1];
    dd[n-1] = 1;
    return bt(a,dd,s,0,n-1);
 
}
int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        sum = 0;
        cin >> n >> k;
        vi a(n);
        for (int i=0;i<n;i++){
            cin >> a[i];
            sum += a[i];
        }
        sort(a.begin(),a.end());
        cout << check(a) << endl;
 
 
    }
}
