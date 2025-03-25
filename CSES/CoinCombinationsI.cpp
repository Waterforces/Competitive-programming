#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int MOD = 1e9+7;
const int N = 1e6+5;
ll n,m,cou,a[100],dp[N];
 
int main() {
    cin >> n >> m;
    for(int i=0;i<n;i++) cin >> a[i];
    dp[0]=1;
    for(int i=1;i<=m;i++) {
        for(int j=0;j<n;j++) {
            if(i-a[j]<0) continue ;
            dp[i]=(dp[i]+dp[i-a[j]])%MOD;
        }
    }
    cout << dp[m];
}