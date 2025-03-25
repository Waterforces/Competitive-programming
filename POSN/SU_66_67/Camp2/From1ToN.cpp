#include<bits/stdc++.h>
#define ppii pair<int,pair<int,int> > 
#define F first
#define S second
using namespace std;
int n,m,dist[1005],p[1005];
vector<pair<int,int> > v[1005];
priority_queue<ppii,vector<ppii>,greater<ppii> > pq;

void fnpar(int cur) {
    if(cur==0) return ;
    fnpar(p[cur]);
    cout << cur << " ";
} 

int main() {
    cin >> n >> m;
    fill(dist+1,dist+n+1,INT_MAX);
    for(int i=0;i<m;i++) {
        int a,b,w;
        cin >> a >> b >> w;
        v[a].push_back({b,w});
        v[b].push_back({a,w});
    }
    pq.push({0,{1,0}});
    while(!pq.empty()) {
        int d = pq.top().F,cur = pq.top().S.F,par = pq.top().S.S;
        pq.pop();
        if(dist[cur]<=d) continue ;
        dist[cur]=d;
        p[cur]=par;
        for(auto x: v[cur]) {
            if(dist[x.F]>x.S+d) pq.push({x.S+d,{x.F,cur}});
        }
    }
    if(dist[n]==INT_MAX) cout << -1;
    else fnpar(n);
}