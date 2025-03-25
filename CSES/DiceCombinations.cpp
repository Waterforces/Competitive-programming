#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 1e6+5;
const ll MOD = 1e9+7;
int n,a[N],dp[N];
 
int main() {
    cin >> n;
    dp[0]=1;
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=6;j++) {
            if(j<=i) dp[i]=(dp[i]+dp[i-j])%MOD;
        }
    }
    cout << dp[n];
}