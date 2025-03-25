#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define T tuple<ll,ll,ll>
using namespace std;
const int N = 1e5+5;
ll n,m,dist[N][2];
vector<pair<ll,ll> > v[N];
priority_queue<T,vector<T>,greater<T> > pq;
 
int main() {
    cin >> n >> m;
    for(int i=1;i<=n;i++) dist[i][0]=dist[i][1]=2e18;
    for(int i=0;i<m;i++) {
        int a,b,w;
        cin >> a >> b >> w;
        v[a].push_back({b,w});
    }
    pq.push({0,1,1});
    while(!pq.empty()) {
        auto [dis,cur,use] = pq.top(); pq.pop();
        if(dist[cur][use]<=dis) continue ;
        dist[cur][use]=dis;
        for(auto [next,ndis]: v[cur]) {
            if(dist[next][use]>ndis+dis) pq.push({ndis+dis,next,use});
            if(use==1) pq.push({(ndis/2)+dis,next,use-1});
        }
    }
    cout << min(dist[n][0],dist[n][1]);
    // for(int i=1;i<=n;i++) {
    //     for(auto j: dist[i]) cout << j << " ";
    //     cout << endl;
    // }
}