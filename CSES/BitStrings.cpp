#include<bits/stdc++.h>
using ll = long long;
using namespace std;
const ll mod = 1e9+7;
ll n,ans=1;
 
int main() {
    cin >> n;
    for(ll i=1;i<=n;i++) ans = (2*ans)%mod;
    cout << ans;
}