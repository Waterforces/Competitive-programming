#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;
const int N = 2e5+5;
int n,dp[N],a[N];

int main() {
    cin >> n;
    for(int i=0;i<n;i++) cin >> a[i];
    dp[1]=dp[0]+abs(a[1]-a[0]);
    for(int i=2;i<n;i++) dp[i]=min(dp[i-1]+abs(a[i]-a[i-1]),dp[i-2]+abs(a[i-2]-a[i]));
    cout << dp[n-1];
}