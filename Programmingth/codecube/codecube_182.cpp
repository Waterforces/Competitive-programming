#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n,h,w;
ll a[100005],a_dq[100005];
ll b[100005],b_dq[100005];
ll ans1,ans2;


int main() {
    cin >> n >> h >> w;
    for(ll i=1;i<=n;i++) {
        cin >> a[i];
        a_dq[i]=a[i]+a_dq[i-1];
        if(i<h) continue ;
        ans1=max(ans1,a_dq[i]-a_dq[i-h]);
    }
    for(ll i=1;i<=n;i++) {
        cin >> b[i];
        b_dq[i]=b[i]+b_dq[i-1];
        if(i<w) continue ;
        ans2=max(ans2,b_dq[i]-b_dq[i-w]);
    }
    //cout << ans1 << " " << ans2 << endl;
    cout << (ans1*w)+(ans2*h);
}