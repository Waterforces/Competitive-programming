#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;
const int N = 2e5+5;
const int MOD = 1e9+7;
ll n,m,dist[N],route[N],minFight[N],maxFight[N];
vector<pair<ll,ll> > v[N];
priority_queue<pair<ll,ll>, vector<pair<ll,ll> >, greater<pair<ll,ll> > > pq;
 
int main() {
    cin.tie(0)->sync_with_stdio(0);
    cin >> n >> m;
    fill(dist+1,dist+1+n,LLONG_MAX);
    for(ll i=0;i<m;i++) {
        ll a,b,c;
        cin >> a >> b >> c;
        v[a].push_back({b,c});
    }
    pq.push({dist[1]=0,route[1]=1});
    while(!pq.empty()) {
        auto [d,cur] = pq.top(); pq.pop();
        for(auto [next,nd]: v[cur]) {
            if(dist[next]>=nd+d) {
                if(dist[next]==nd+d) {
                    route[next]=(route[next]+route[cur])%MOD;
                    minFight[next]=min(minFight[next],minFight[cur]+1);
                    maxFight[next]=max(maxFight[next],maxFight[cur]+1);
                }
                else {
                    pq.push({dist[next]=nd+d,next});
                    route[next]=route[cur];
                    minFight[next]=minFight[cur]+1;
                    maxFight[next]=maxFight[cur]+1;
                }
            }
        }
    }
    cout << dist[n] << " " << route[n] << " " << minFight[n] << " " << maxFight[n];
}