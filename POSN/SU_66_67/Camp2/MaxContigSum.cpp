#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;
int n,a,ans,dp;

int main() {
    cin >> n;
    for(int i=0;i<n;i++) {
        cin >> a;
        dp=max(dp+a,a);
        ans=max(ans,dp);
    }
    cout << ans;
}