#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int MOD = 909091;
ll n,dp[10005];

int main() {
    cin >> n;
    dp[0]=1;
    for(ll i=1;i<=n;i++) {
        for(ll j=1;j<=i;j++) {
            dp[i]+=(dp[i-j]*dp[j-1])%MOD;
        }
        dp[i]%=MOD;
    }
    cout << dp[n];
}