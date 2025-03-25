#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 1e5+5;
typedef struct node {
    ll a,b,w;
    bool operator<(const node &other) const {
        return w<other.w;
    }
} node;
ll n,m,h[N],ans,cou;
node t[2*N];
 
int dsu(int cur) {
    if(h[cur]==cur) return cur;
    return h[cur]=dsu(h[cur]);
}
 
int main() {
    cin >> n >> m;
    for(int i=1;i<=n;i++) h[i]=i;
    for(int i=0;i<m;i++) {
        int a,b,w;
        cin >> a >> b >> w;
        t[i]={a,b,w};
    }
    sort(t,t+m);
    for(int i=0;i<m;i++) {
        auto [a,b,w] = t[i];
        if(dsu(a)==dsu(b)) continue ;
        h[dsu(a)]=h[dsu(b)];
        cou++;
        ans+=w;
    }
    if(cou==n-1) cout << ans;
    else cout << "IMPOSSIBLE";
}