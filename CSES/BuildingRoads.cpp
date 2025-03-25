#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define F first
#define S second
using namespace std;
const int N = 2e5+5;
int n,m,nd,h[N];
vector<pair<int,int> > v;
 
int dsu(int cur) {
    if(h[cur]==cur) return cur;
    return h[cur]=dsu(h[cur]);
}
 
int main() {
    cin >> n >> m;
    for(int i=1;i<=n;i++) h[i]=i;
    for(int i=0;i<m;i++) {
        int a,b;
        cin >> a >> b;
        h[dsu(a)]=h[dsu(b)];
        nd=a;
    }
    for(int i=1;i<=n;i++) {
        if(dsu(nd)==dsu(i)) continue ;
        h[dsu(i)]=dsu(nd);
        v.push_back({nd,i});
    }
    cout << v.size() << endl;
    for(auto [a,b]: v) cout << a << " " << b << endl;
}