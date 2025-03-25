#include<bits/stdc++.h>
using namespace std;
using pii = pair<int,int>;
const int N=1e5+5;
vector<pii> v[N];
int dist[N],n,_max;
priority_queue<pii> pq;

int main() {
    cin >> n;
    for(int i=0;i<n;i++) {
        int a,b,w;
        cin >> a >> b >> w;
        v[a].push_back({b,w});
        v[b].push_back({a,w});
    }
    for(int i=0;i<=n;i++) dist[i]=INT_MAX;
    pq.push({0,1});
    while(!pq.empty()) {
        auto [dis,cur] = pq.top(); pq.pop();
        if(dist[cur]<=dis) continue ;
        dist[cur]=dis;
        _max=max(_max,dis);
        for(auto [next,ndis] : v[cur]) {
            if(dist[next]<=ndis+dis) continue ;
            pq.push({ndis+dis,next});
        }
    }
    cout << _max;
}