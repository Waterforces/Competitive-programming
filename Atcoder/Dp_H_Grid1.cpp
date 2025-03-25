#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll MOD = 1e9+7;
int h,w,dp[1005][1005];
char s[1005][1005];

int main() {
    cin >> h >> w;
    for(int i=1;i<=h;i++) {
        for(int j=1;j<=w;j++) {
            cin >> s[i][j];
        }
    }
    dp[1][1]=1;
    for(int i=1;i<=h;i++) {
        for(int j=1;j<=w;j++) {
            if((i==1 && j==1) || s[i][j]=='#') continue ;
            dp[i][j]=(dp[i-1][j]+dp[i][j-1])%MOD;
        }
    }
    cout << dp[h][w];
}
