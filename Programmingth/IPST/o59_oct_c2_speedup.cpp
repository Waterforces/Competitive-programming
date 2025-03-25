//Dijkstra on state
#include<bits/stdc++.h>
#define ll long long
#define T tuple<ll,ll,ll,ll> 
using namespace std;
const ll N = 8e4+5;
ll n,m,l,q,ans=LLONG_MAX,dist[N][10],k[11]={1,2,4,8,16,32,64,128,256,512,1024};
bool potion[N];
vector<pair<ll,ll> > v[N];
priority_queue<T, vector<T>, greater<T> > pq;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    cin >> n >> m >> l >> q;
    for(int i=1;i<=n;i++) {
        for(int j=0;j<9;j++) dist[i][j]=LLONG_MAX;
    }
    for(ll i=0;i<m;i++) {
        ll a,b,w;
        cin >> a >> b >> w;
        v[a].push_back({b,w});
    }
    while(l-->0) {
        int a;
        cin >> a;
        potion[a]=1;
    }
    dist[1][0]=0;
    pq.push({0,1,0,-1});
    while(!pq.empty()) {
        auto [d,cur,use,last] = pq.top(); pq.pop();
        // cout << d << " " << cur << " " << use << " " << last << endl;
        for(auto [next,nd]: v[cur]) {
            if(dist[next][use]>d+nd/k[use]) {
                dist[next][use]=d+nd/k[use];
                pq.push({dist[next][use],next,use,last});
            }
            if(potion[cur] && cur!=last && use<q && dist[next][use+1]>d+nd/k[use+1]) {
                dist[next][use+1]=d+nd/k[use+1];
                pq.push({dist[next][use+1],next,use+1,cur});
            }
        }
    }
    for(ll i=0;i<=q;i++) ans=min(ans,dist[n][i]);
    cout << ans;
}