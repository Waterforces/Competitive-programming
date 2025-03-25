#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;
int n,q[2],dist[2][1505],sk,pk;
vector<int> v[1505];
priority_queue<pair<int,int>, vector<pair<int,int> >, greater<pair<int,int> > > pq;

int main() {
    cin >> n >> q[0] >> q[1];
    for(int i=0;i<2;i++) fill(dist[i]+1,dist[i]+n+1,INT_MAX);
    for(int i=1;i<=n;i++) {
        int m;
        cin >> m;
        for(int j=0;j<m;j++) {
            int a;
            cin >> a;
            v[i].push_back(a);
        }
    }
    for(int i=0;i<2;i++) {
        pq.push({dist[i][q[i]]=0,q[i]});
        while(!pq.empty()) {
            // auto [d,cur] = pq.top(); pq.pop();
            int d = pq.top().first,cur = pq.top().second; pq.pop(); 
            for(auto next: v[cur]) {
                if(dist[i][next]>d+1) pq.push({dist[i][next]=d+1,next});
            }
        }
    }
    int ck;
    cin >> ck;
    for(int i=0;i<ck;i++) {
        int k;
        cin >> k;
        if(dist[0][k]>dist[1][k]) sk++;
        else if(dist[0][k]<dist[1][k]) pk++;
    }
    cout << pk << " " << sk << " " << ck-(pk+sk);
}