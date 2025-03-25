#include<bits/stdc++.h>
using namespace std;
typedef struct edge {
    int a,b,w;
} edge;
edge x[200005];
int kep[100005];
int h[100005];
int n,m;
int sum;

int fnhead(int v) {
    if(h[v]==v) return v;
    return h[v]= fnhead(h[v]);
}

bool comp(edge a,edge b) {
    return a.w>b.w;
}

void process() {
    for(int i=1;i<=n;i++) {
        h[i]=i;
    }
    sort(x,x+m,comp);
    for(int i=0;i<m;i++) {
        int a=x[i].a;
        int b=x[i].b;
        int w=x[i].w;
        if(fnhead(a)==fnhead(b)) continue ;
        
        sum+=w;
        h[fnhead(a)]=h[b];
    }
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    cin >> n >> m;
    for(int i=1;i<=n;i++) {
        cin >> kep[i];
    }
    for(int i=0;i<m;i++) {
        int a,b,w;
        cin >> a >> b;
        w=kep[a]+kep[b];
        x[i]={a,b,w};
    }
    process();
    cout << sum;
}