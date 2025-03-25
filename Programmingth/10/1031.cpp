#include<bits/stdc++.h>
using namespace std;
const int N = 1e4+5;
int n,m,k,ans,dp[N];
vector<int> v[N];
queue<pair<int,int> > q;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    cin >> k >> n >> m;
    for(int i=1;i<=n;i++) dp[i]=INT_MAX;
    for(int i=0;i<m;i++) {
        int a,b;
        cin >> a >> b;
        v[a].push_back(b);
    }
    q.push({1,0});
    while(!q.empty()) {
        auto [cur,d] = q.front(); q.pop();
        if(dp[cur]<=d) continue ;
        dp[cur]=d;
        for(auto x: v[cur]) q.push({x,d+1}); 
    }
    for(int i=1;i<=n;i++) {
        if(dp[i]<=k) ans=i;
    }
    cout << ans;
}