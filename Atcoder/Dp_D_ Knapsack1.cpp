#include<bits/stdc++.h>
using ll = long long;
using namespace std;
ll n,m,a[105],w[105],dp[105][100005];

int main() {
    cin >> n >> m;
    for(int i=1;i<=n;i++) cin >> w[i] >> a[i];
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=m;j++) {
            if(j-w[i]<0 ) dp[i][j]=dp[i-1][j];
            else dp[i][j]=max(dp[i-1][j],dp[i-1][j-w[i]]+a[i]);
        }
    }
    cout << dp[n][m];
    // for(int i=1;i<=n;i++) {
    //     for(int j=1;j<=m;j++) {
    //         cout << dp[i][j] << " ";
    //     } cout << endl;
    // }
}