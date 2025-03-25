#include<bits/stdc++.h>
#define ll long long
using namespace std;
typedef struct node{
    vector<pair<ll,ll>> v;
    ll dis=LLONG_MAX;
    bool ch;
} node;
int n,m;
priority_queue<pair<ll,ll> ,vector<pair<ll,ll>> ,greater<pair<ll,ll>> > pq;
node x[100005];
 
void run(int cur,ll dis) {
    if(x[cur].ch) return ;
    if(x[cur].dis<dis) return ;
    x[cur].ch=1;
    x[cur].dis=dis;
    for(int i=0;i<x[cur].v.size();i++) {
        int next=x[cur].v[i].first;
        ll ndis=dis+x[cur].v[i].second;
        if(x[next].ch) continue ;
        if(x[next].dis<ndis) continue ;
        pq.push({ndis,next});
    }
}
 
int main() {
    cin.tie(0)->sync_with_stdio(0);
    cin >> n >> m;
    for(int i=0;i<m;i++) {
        ll a,b,w;
        cin >> a >> b >> w;
        x[a].v.push_back({b,w});
    }
    pq.push({0,1});
    while(!pq.empty()) {
        int next=pq.top().second;
        ll dis=pq.top().first;
        pq.pop();
        run(next,dis);
    }
    for(int i=1;i<=n;i++) {
        cout << x[i].dis << " ";
    }
}
