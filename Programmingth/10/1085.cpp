#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;
const int N =5e5+5;
int n,m,k,_max;
bool visited[N],stop[N];
vector<int> v[N];

void dfs(int cur) {
    if(cur==n+1) return ;
    // cout << cur << " " << warp[cur] << endl;
    _max=max(_max,cur);
    for(auto next: v[cur]) {
        if(!visited[next]) {
            visited[next]=1;
            dfs(next);
        }
    } 
    if(!visited[cur+1] && !stop[cur])  {
        visited[cur+1]=1;
        dfs(cur+1);
    }
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    cin >> n >> m >> k;
    for(int i=0;i<m;i++) {
        int a,b;
        cin >> a >> b;
        v[a].push_back(b);
        // cout << a << " " << b << " " << warp[a] << endl;
    }
    for(int i=0;i<k;i++) {
        int a;
        cin >> a;
        stop[a]=1;
    }
    dfs(1);
    if(_max==n) cout << 1;
    else cout << 0 << " " << _max;
}