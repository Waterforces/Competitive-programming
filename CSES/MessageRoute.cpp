#include<bits/stdc++.h>
#define T tuple<int,int,int>
using namespace std;
const int N = 1e5+5;
int n,m,dist[N],p[N];
vector<int> v[N],ans;
priority_queue<T ,vector<T >, greater<T > > pq;
 
void fnpar(int cur) {
    if(cur==0) return ;
    fnpar(p[cur]);
    ans.push_back(cur);
}
 
int main() {
    cin >> n >> m;
    for(int i=1;i<=n;i++) dist[i]=INT_MAX;
    for(int i=0;i<m;i++) {
        int a,b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    pq.push({0,1,0});
    while(!pq.empty()) {
        auto [d,cur,par] = pq.top(); pq.pop();
        if(dist[cur]<=d) continue ;
        dist[cur]=d;
        p[cur]=par;
        for(auto next: v[cur]) {
            if(dist[next]<=d+1) continue ;
            pq.push({d+1,next,cur});
        } 
    }
    fnpar(n);
    if(ans.size()==1) cout << "IMPOSSIBLE";
    else {
        cout << ans.size() << endl;
        for(auto x: ans) cout << x << " ";
    }
    // for(int i=1;i<=n;i++) cout << i << " " << p[i] << endl;
}