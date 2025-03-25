#include<bits/stdc++.h>
using namespace std;
int a,b,c,d,e,n;
int _c[5];
float ans;
int main() {
    cin >> n;
    for(int i=0;i<n;i++) {
        cin >> a >> b >> c >> d >> e;
        _c[0]+=a;
        _c[1]+=b;
        _c[2]+=c;
        _c[3]+=d;
        _c[4]+=e;
    }
    ans=_c[0]+(_c[1]*0.75)+(_c[2]*0.5)+(_c[3]*0.25)+(_c[4]*0.125);
    ans=ceil(ans);
    cout << ans;
}