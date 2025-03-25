#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
using namespace std;
const int N = 5e4+5;
ll n,m,p,a[N],b[N],w[N],h[N],l=1,r=1e9;
pair<ll,ll> pa[N];

ll dsu(int cur) {
    if(h[cur]==cur) return cur;
    return h[cur]=dsu(h[cur]);
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    cin >> n >> m >> p;
    for(ll i=0;i<m;i++) cin >> a[i] >> b[i] >> w[i];
    for(ll i=0;i<p;i++) cin >> pa[i].F >> pa[i].S;
    while(l<r) {
        for(ll i=1;i<=n;i++) h[i]=i;
        ll mid=(l+r)/2;
        // cout << l << " " << r << " = " << mid << endl;
        bool check=0;
        for(int i=0;i<m;i++) {
            if(dsu(a[i])==dsu(b[i]) || w[i]>=mid) continue ;
            h[dsu(a[i])]=h[dsu(b[i])];
        }
        for(int i=0;i<p;i++) {
            if(h[dsu(pa[i].F)]==h[dsu(pa[i].S)]) {
                check=1;
                break;
            }
        }
        if(!check) l=mid+1;
        else r=mid;
    }
    if(l==1e9) cout << -1;
    else cout << l-1;
}