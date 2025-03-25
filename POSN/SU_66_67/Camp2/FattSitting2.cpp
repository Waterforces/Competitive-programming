#include<bits/stdc++.h>
using namespace std;
const int N = 6e3+5;
int n,ck,dist[2][N],pk,sk;
vector<int> v[N];
priority_queue<pair<int,int>, vector<pair<int,int> >, greater<pair<int,int> > > pq[2];

int main() {
    cin >> n;
    for(int i=1;i<=n;i++) dist[0][i]=dist[1][i]=INT_MAX;
    for(int i=0;i<2;i++) {
        int m;
        cin >> m;
        for(int j=0;j<m;j++) {
            int a;
            cin >> a;
            pq[i].push({dist[i][a]=0,a});
        }
    }
    for(int i=1;i<=n;i++) {
        int m;
        cin >> m;
        while(m--) {
            int a;
            cin >> a;
            v[i].push_back(a);
        }
    }
    for(int i=0;i<2;i++) {
        while(!pq[i].empty()) {
            // auto [d,cur] = pq[i].top(); pq[i].pop();
            int d = pq[i].top().first,cur = pq[i].top().second; pq[i].pop(); 
            for(auto next: v[cur]) {
                if(dist[i][next]>d+1) pq[i].push({dist[i][next]=d+1,next});
            }
        }
    }
    cin >> ck;
    for(int i=0,q;i<ck;i++) {
        cin >> q;
        if(dist[0][q]>dist[1][q]) sk++;
        else if(dist[0][q]<dist[1][q]) pk++;
    }
    cout << pk << " " << sk << " " << ck-(sk+pk);
}