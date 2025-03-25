#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll n,m,w[105],a[105],dp[3][100005],_max,k;

int main() {
    cin >> n >> m;
    for(int i=0;i<2;i++) {
        for(int j=0;j<=100000;j++) dp[i][j]=INT_MAX;
    }
    for(int i=1;i<=n;i++) cin >> w[i] >> a[i];
    dp[0][0]=0;
    for(int i=1;i<=n;i++) {
        for(ll j=0;j<=100000;j++) {
            if(j-a[i]<0) dp[i%2][j]=dp[(i+1)%2][j];
            else {
                dp[i%2][j]=min(dp[(i+1)%2][j],dp[(i+1)%2][j-a[i]]+w[i]);
            }
            if(m>=dp[i%2][j]) _max=max(_max,j);
            // cout << dp[i%2][j] << " ";
        }
        // cout << endl;
    }
    cout << _max;
}
