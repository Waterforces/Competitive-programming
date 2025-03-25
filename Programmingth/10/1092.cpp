#include<bits/stdc++.h>
using namespace std;
int n,m,a[100005],h[100005];

int dsu(int cur) {
    if(h[cur]==cur) return cur;
    return h[cur]=dsu(h[cur]);
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    cin >> n >> m;
    for(int i=1;i<=n;i++) h[i]=i;
    for(int i=1;i<=n;i++) cin >> a[i];
    for(int i=0;i<m;i++) {
        int v,u;
        cin >> u >> v;
        if(dsu(u)==dsu(v)) cout << -1 << "\n";
        else if(a[dsu(u)]>a[dsu(v)]) {
            a[dsu(u)]+=a[dsu(v)]/2;
            h[dsu(v)]=h[dsu(u)];
            cout << dsu(u) << "\n";
        }
        else if(a[dsu(u)]<a[dsu(v)]) {
            a[dsu(v)]+=a[dsu(u)]/2;
            h[dsu(u)]=h[dsu(v)];
            cout << dsu(v) << "\n";
        }
        else {
            if(dsu(u)>dsu(v)) {
                a[dsu(v)]+=a[dsu(u)]/2;
                h[dsu(u)]=h[dsu(v)];
                cout << dsu(v) << "\n";
            }
            else {
                a[dsu(u)]+=a[dsu(v)]/2;
                h[dsu(v)]=h[dsu(u)];
                cout << dsu(u) << "\n";
            }
        }
    }
}