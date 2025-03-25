#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;
const int N = 505;
ll n,m,q,dist[N][N];
 
int main() {
    cin.tie(0)->sync_with_stdio(0);
    cin >> n >> m >> q;
    for(ll i=1;i<=n;i++) {
        for(ll j=1;j<=n;j++) {
            if(i!=j) dist[i][j]=2e18; 
        }
    }
    for(ll i=0;i<m;i++) {
        ll a,b,w;
        cin >> a >> b >> w;
        dist[a][b]=dist[b][a]=min(dist[a][b],w);
    }
    for(ll k=1;k<=n;k++) {
        for(ll i=1;i<=n;i++) {
            for(ll j=1;j<=n;j++) {
                if(dist[i][k]==2e18 || dist[k][j]==2e18) continue ;
                dist[i][j]=min(dist[i][j],dist[i][k]+dist[k][j]);
            }
        }
    }
    while(q--) {
        ll a,b;
        cin >> a >> b;
        if(dist[a][b]==2e18) cout << "-1\n";
        else cout << dist[a][b] << endl; 
    }
}
