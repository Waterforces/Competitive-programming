#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;
const int N = 1e5+5;
typedef struct edge {
    int a,b,w,i;
    bool operator<(const edge &o) const {
        return w<o.w;
    }
} edge;
edge x[N*2],Q[N*3];
int n,m,q,h[N],ans[N*3];

int dsu(int cur) {
    if(h[cur]==cur) return cur;
    return h[cur]=dsu(h[cur]);
}

int main() {
    cin >> n >> m >> q;
    for(int i=0;i<n;i++) h[i]=i;
    for(int i=0;i<m;i++) cin >> x[i].a >> x[i].b >> x[i].w;
    for(int i=0;i<q;i++) {
        cin >> Q[i].a >> Q[i].b >> Q[i].w;
        Q[i].i=i;
    }
    sort(x,x+m);
    sort(Q,Q+q);
    int cur=0;
    for(int i=0;i<q;i++) {
        auto [a,b,w,idx] = Q[cur];
        while(cur<m && Q[cur].w<=w) {
            auto [u,v,NotUseW,NotUseI] = x[i];
            cur++;
            if(dsu(u)==dsu(v)) continue ;
            h[dsu(u)]=h[dsu(v)];
        }
        if(dsu(a)==dsu(b)) ans[idx]=1;
    }
    for(int i=0;i<q;i++) {
        if(ans[i]) cout << "Yes\n";
        else cout << "No\n";;
    }
}