#include<bits/stdc++.h>
using namespace std;
int h[100005],dp[100005],n,q;

int main() {
    cin >> n >> q;
    for(int i=0;i<n;i++) cin >> h[i];
    dp[1]=dp[0]+abs(h[1]-h[0]);
    for(int i=2;i<n;i++) {
        dp[i]=dp[i-1]+abs(h[i-1]-h[i]);
        for(int k=1;k<=q;k++) {
            if(i-k<0) break ;
            dp[i]=min(dp[i],dp[i-k]+abs(h[i-k]-h[i]));
        }
    }
    cout << dp[n-1];
    // for(int i=1;i<=n;i++) cout << dp[i] << " "; 
}