#include<bits/stdc++.h>
#define endl '\n'
#define F first
#define S second
using namespace std;
const int N = 1e5+5;
int n,m,q,dist[N],p[N];
vector<pair<int,int> > v[N];
priority_queue<pair<int,int>, vector<pair<int,int> >,greater<pair<int,int> > > pq;

void fnpar(int cur) {
    if(cur==-1) return ;
    fnpar(p[cur]);
    cout << cur << " ";
}

int main() {
    cin >> n >> m;
    fill(dist,dist+n,INT_MAX);
    for(int i=0;i<m;i++) {
        int a,b,w;
        cin >> a >> b >> w;
        v[a].push_back({b,w});
    }
    cin >> q;
    p[q]=-1;
    pq.push({dist[q]=0,q});
    while(!pq.empty()) {
        int d = pq.top().F,cur = pq.top().S; pq.pop();
        for(auto x: v[cur]) {
            if(dist[x.F]>d+x.S) {
                p[x.F] = cur;
                pq.push({dist[x.F]=d+x.S,x.F});
            }
        }
    }
    for(int i=0;i<n;i++) {
        if(q==i) continue ;
        cout << q << " -> " << i << " (";
        if(dist[i]==INT_MAX) cout << "inf) \n";
        else {
        cout << dist[i] << ") ";
        fnpar(i);
        cout << endl;            
        }
    }
}