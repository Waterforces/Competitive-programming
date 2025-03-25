#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
const int N = 1e5+5;
int n,m,k,t,dist[2][N];
vector<pair<int,int> > v[N];
priority_queue<tuple<int,int,int>, vector<tuple<int,int,int> >, greater<tuple<int,int,int> > > pq;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    cin >> n >> m >> k >> t;
    for(int i=0;i<2;i++) fill(dist[i]+1,dist[i]+1+n,INT_MAX);
    for(int i=0;i<m;i++) {
        int a,b,w;
        cin >> a >> b >> w;
        v[a].push_back({b,w});
        v[b].push_back({a,w});
    }
    pq.push({dist[0][1]=0,1,1});
    while(!pq.empty()) {
        auto [d,cur,use] = pq.top(); pq.pop();
        for(auto [next,nd]: v[cur]) {
            if(dist[use][next]>nd+d) pq.push({dist[use][next]=nd+d,next,use});
            if(use==1 && dist[0][next]>d+k) pq.push({dist[0][next]=d+k,next,0});
        }
    }
    // for(int i=1;i<=n;i++) cout << i << " " << dist[0][i] << " " << dist[1][i] << endl;
    int ans = min(dist[0][n],dist[1][n]);
    if(ans<=t) cout << "Happy Winnie the Pooh :3\n" << ans;
    else cout << "No Honey TT";
}