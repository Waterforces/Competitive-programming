#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
int n,m,ans[N],visited[N],ch;
vector<int> v[N];
 
void dfs(int cur,int col) {
    if(visited[cur]!=0) {
        // cout << cur << " " << col << " " << visited[cur] << endl;
        if(visited[cur]!=col) ch=1;
        return ;
    }
        // cout << cur << " " << col << " " << visited[cur] << endl;
    visited[cur]=col;
    for(auto x: v[cur]) {
        if(col==1) dfs(x,2);
        else dfs(x,1);
    }
}
 
int main() {
    cin >> n >> m;
    for(int i=0;i<m;i++) {
        int a,b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    for(int i=1;i<=n;i++) {
        if(visited[i]==0) dfs(i,1);
    }
    if(ch) cout << "IMPOSSIBLE";
    else {
        for(int i=1;i<=n;i++) cout << visited[i] << " ";        
    }
 
}
