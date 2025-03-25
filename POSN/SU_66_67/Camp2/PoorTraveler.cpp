#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;
int n,m,k,p,_maxPath;
vector<bool> visited;
vector<int> v,u,c,t,path,ans;
vector<vector<int> > graph;

void dfs(int cur,int coin,int time) {
    if(coin>k || time>p) return ;
    if(_maxPath<path.size()) {
        _maxPath=path.size();
        ans=path;
    }
    for(auto idx: graph[cur]) {
        if(visited[v[idx]]==true) continue ;
        visited[v[idx]]=1;
        path.push_back(v[idx]);
        dfs(v[idx],coin+c[idx],time+t[idx]);
        visited[v[idx]]=0;
        path.pop_back();
    }
}

int main() {
    cin >> n >> m >> k >> p;
    graph.resize(n);
    visited.resize(n);
    u.resize(m);
    v.resize(m);
    c.resize(m);
    t.resize(m);
    for(int i=0;i<m;i++) {
        cin >> u[i] >> v[i] >> c[i] >> t[i];
        graph[u[i]].push_back(i);
    }
    for(int i=0;i<n;i++) {
        fill(visited.begin(),visited.end(),0);
        visited[i]=1;
        path.push_back(i);
        dfs(i,0,0);
        path.pop_back();
    }
    cout << "Maximum cities reachable: " << ans.size() << endl << "Path: ";
    for(auto cur: ans) cout << cur << " ";
}