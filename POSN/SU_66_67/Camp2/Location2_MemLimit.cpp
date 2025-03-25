#include <bits/stdc++.h>
using namespace std;
int dp[305][1005],ans,sum,cnt,a;
int main() { 
    int n,m,k; cin >> n >> m >> k;
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=m;j++) {
            int x = i%(k+1),lx = i%(k+1)-1, ls = x%(k+1)+1;
            if(x==0) x=k+1;
            if(lx<=0) lx+=k+1;
            cin >> dp[x][j];
            dp[x][j]+=dp[lx][j]+dp[x][j-1]-dp[lx][j-1];
            a = dp[x][j] - dp[ls][j] - dp[x][j-k] + dp[ls][j-k];
            if(a>=sum) {
                if(sum==a) cnt++;
                else {
                    sum=a;
                    cnt=1;
                }
            }
        }
    }
    cout << sum << " " << cnt;
}
/*
6 4 
3 
1 1 1 1
1 0 0
2 1 1
3 2 1
3 3 1
1 1 1 1
-2 3 2
0 3 2
2 3 2
6 3 2
1 1 1 1
-5 6 1
-2 6 1
1 6 1
9 6 1
1 1 1 1
-7 9 1
-3 9 1
1 9 1
9 9 1
1 1 1 1
-7 9 2
-3 9 2
1 9 2
9 9 2
1 1 1 1
-7 9 3
-3 9 3
1 9 3
9 9 3
9 4
*/