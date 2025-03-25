#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;
const int N = 1e5+5;
ll n,m,dist[3][N],A,B,C,D;
bool visited[N];
vector<pair<ll,ll> > v[N];
priority_queue<pair<ll,ll>, vector<pair<ll,ll> >, greater<pair<ll,ll> > > pq;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    cin >> n >> m;
    for(int i=1;i<=n;i++) dist[0][i]=dist[1][i]=dist[2][i]=2e18;
    for(int i=0;i<m;i++) {
        int a,b,w;
        cin >> a >> b >> w;
        v[a].push_back({b,w});
        v[b].push_back({a,w});
    }
    cin >> A >> B >> C >> D;
    pq.push({dist[0][A]=0,A});
    while(!pq.empty()) {
        auto [d,cur] = pq.top(); pq.pop();
        for(auto [next,nd]: v[cur]) {
            if(dist[0][next]>nd+d) pq.push({dist[0][next]=nd+d,next});
        }
    }
    pq.push({dist[1][B]=0,B});
    while(!pq.empty()) {
        auto [d,cur] = pq.top(); pq.pop();
        for(auto [next,nd]: v[cur]) {
            if(dist[1][next]>nd+d) pq.push({dist[1][next]=nd+d,next});
        }
    }
    // for(int i=1;i<=n;i++) cout << i << " " << dist[0][i] << " " << dist[1][i] << endl;
    for(int i=1;i<=n;i++) {
        if(dist[0][i]+dist[1][i]==dist[0][B]) visited[i]=1;
    }
    // for(int i=1;i<=n;i++) cout << i << " " << visited[i] << endl;
    pq.push({dist[2][C]=0,C});
    while(!pq.empty()) {
        auto [d,cur] = pq.top(); pq.pop();
        for(auto [next,nd]: v[cur]) {
            if(dist[2][next]>nd+d && !visited[next]) pq.push({dist[2][next]=nd+d,next});
        }
    }
    if(dist[2][D]==2e18) cout << -1;
    else cout << dist[2][D];
}