#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5+5;
ll n,m,w[105],a[105],dp[2][N],_max,k;

int main() {
    for(ll i=0;i<2;i++) fill(dp[i],dp[i]+N,INT_MAX);
    cin >> n >> m;
    for(ll i=1;i<=n;i++) cin >> w[i] >> a[i];
    dp[0][0]=0;
    for(ll i=1;i<=n;i++) {
        for(ll j=0;j<=N-5;j++) {
            if(j-a[i]<0) dp[i%2][j]=dp[(i+1)%2][j];
            else dp[i%2][j]=min(dp[(i+1)%2][j],dp[(i+1)%2][j-a[i]]+w[i]);
            if(m>=dp[i%2][j]) _max=max(_max,j);
        }
    }
    cout << _max;
}
