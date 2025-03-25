#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;
const int N = 1e5+5;
int n,m,dp[N],_max;
vector<int> v[N];

void dfs(int cur,int cnt) {
    if(dp[cur]>cnt) return ;
    dp[cur]=cnt;
    _max=max(_max,cnt);
    for(auto next: v[cur]) dfs(next,cnt+1);
}

int main() {
    cin >> n >> m;
    for(int i=0;i<m;i++) {
        int a,b;
        cin >> a >> b;
        v[a].push_back(b);
    }
    for(int i=1;i<=n;i++) {
        fill(dp+1,dp+n+1,0);
        dfs(i,1);
    }
    cout << _max-1;
}