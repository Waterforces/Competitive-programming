#include<bits/stdc++.h>
using namespace std;
int dp[100005][4],n;

int main() {
    cin >> n;
    for(int i=1;i<=n;i++) {
        int a[4];
        cin >> a[0] >> a[1] >> a[2];
        for(int j=0;j<3;j++) {
            dp[i][j]=a[j]+max(dp[i-1][(j+1)%3],dp[i-1][(j+2)%3]);
            // cout << dp[i][j] << " ";
        }
        // cout << endl;
    }
    cout << max(dp[n][0],max(dp[n][1],dp[n][2]));
}