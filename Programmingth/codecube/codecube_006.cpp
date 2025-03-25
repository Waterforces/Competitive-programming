#include<bits/stdc++.h>
using namespace std;
const int N=1e6+5;
int a[N];
int dp[N];
int n,_min=INT_MAX;

void dis() {
    cout << endl;
    for(int i=1;i<=n;i++) {
        cout << dp[i] << " ";
    }
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    cin >> n;
    int x=-1;
    int diff_max=0;
    for(int i=1;i<=n;i++) {
        cin >> a[i];
        dp[i]=(a[i]*x)+dp[i-1];
        _min=min(_min,dp[i]);
        x*=-1;
        diff_max=max(diff_max,dp[i]-_min);
        // cout << _min << " " << diff_max << endl;
    }
    cout << dp[n]-(diff_max*2);
    // dis();
}