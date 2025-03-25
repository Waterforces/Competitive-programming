#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;
const int N = 1e6+5;
ll n,m,l,d,a[N],cnt;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    cin >> n >> m >> l >> d;
    for(int i=1;i<=n;i++) cin >> a[i];
    for(int i=1;i<=m;i++) {
        int k; cin >> k;
        for(int j=k-l;j<=k+l;j++) {
            if(a[j]<=0 || j<=0 || j>n) continue ;
            a[j]-=d;
            if(a[j]<=0) cnt++;
        }
        if(cnt==n) {
            cout << i;
            return 0;
        }
    }
    cout << -1;
}