#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;
int n,dp[1005][1005];
char s[1005][1005];
 
int main() {
    cin >> n;
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++){
            cin >> s[i][j];
        }
    }
    if(s[1][1]=='.') dp[1][1]=1;
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++){
            if(s[i][j]=='*' || (i==1 && j==1)) continue ;
            dp[i][j]=(dp[i-1][j]+dp[i][j-1])%MOD;
        }
    }
    cout << dp[n][n];
}
