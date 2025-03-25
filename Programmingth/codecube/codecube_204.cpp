#include<bits/stdc++.h>
using namespace std;
int n,m,dp[17][50005],bits;
string q,s,comp="XMAS";
vector<pair<int,int> > v[50005];
priority_queue<tuple<int,int,int>,vector<tuple<int,int,int> >,greater<tuple<int,int,int> > > pq; 

int main() {
    cin.tie(0)->sync_with_stdio(0);
    cin >> n >> m >> q >> s;
    for(int i=0;i<=16;i++) {
        for(int j=1;j<=n;j++) dp[i][j]=INT_MAX;
    }
    for(int i=0;i<m;i++) {
        int a,b,w;
        cin >> a >> b >> w;
        v[a].push_back({b,w});
        v[b].push_back({a,w});
    }
    for(int i=0;i<4;i++) {
        if(q[i]==comp[i]) bits = bits | (1 << i);
    }
    // dp[bits][n]=0;
    // cout << bits << endl;
    for(int i=0;i<4;i++) {
        if(s[n-2]==comp[i]) bits = bits | (1 << i);
    }
    pq.push({0,n,bits});
    while(!pq.empty()) {
        auto [dist,cur,state] = pq.top(); pq.pop();
        // cout << dist << " " << cur << " " << state << endl;
        if(dp[state][cur]<=dist) continue ;
        // cout << "con\n";
        // cout << dist << " " << cur << " " << state << endl;
        dp[state][cur]=dist;
        for(auto [next,ndist]: v[cur]) {
            int tmp=state;
            for(int i=0;i<4;i++) {
                if(s[next-2]==comp[i]) tmp = tmp | (1 << i);
            }
            if(dp[tmp][next]<=dist+ndist) continue ;
            pq.push({ndist+dist,next,tmp});
        }
    }
    cout << dp[15][1];
}