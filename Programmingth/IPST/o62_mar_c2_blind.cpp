#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;
const int N = 2e4+5;
int n,w,h[N],sq[N];
vector<tuple<int,int,int,int>> t;
vector<int> v[N],ans[N],tmp;
queue<int> q;

int dsu(int cur) {
    if(h[cur]==cur) return cur;
    return h[cur]=dsu(h[cur]);
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    cin >> n >> w;
    for(int i=1;i<=n;i++) h[i]=i;
    for(int i=0;i<w;i++) {
        int T,a,b,c;
        cin >> T >> a >> b >> c;
        if(T==3) {
            if(dsu(a)!=dsu(b)) h[dsu(a)]=h[dsu(b)];
            if(dsu(a)!=dsu(c)) h[dsu(a)]=h[dsu(c)];
        }
        else t.push_back({T,a,b,c});
    }
    for(auto [T,a,b,c]: t) {
        if(T==1) {
            v[dsu(b)].push_back(dsu(a));
            v[dsu(c)].push_back(dsu(a));
            sq[dsu(a)]+=2;
        }
        else {
            v[dsu(a)].push_back(dsu(b));
            v[dsu(a)].push_back(dsu(c));
            sq[dsu(b)]++;
            sq[dsu(c)]++;
        }
    }
    for(int i=1;i<=n;i++) ans[dsu(i)].push_back(i);
    for(int i=1;i<=n;i++) {
        if(sq[dsu(i)]==0 && dsu(i)==i) q.push(dsu(i)); 
    }
    while(!q.empty()) {
        auto dsuCur = q.front(); q.pop();
        tmp.push_back(dsuCur);
        // cout << tmp.size() << " " << dsuCur << endl;
        for(auto dsuNext: v[dsuCur]) {
            sq[dsu(dsuNext)]--;
            if(sq[dsu(dsuNext)]==0) q.push(dsuNext);
        }
    }
    cout << tmp.size() << endl;
    for(auto i: tmp) {
        cout << ans[i].size() << " ";
        sort(ans[i].begin(),ans[i].end());
        for(auto j: ans[i]) cout << j << " ";
        cout << endl;
    }
}