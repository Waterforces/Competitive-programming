#include<bits/stdc++.h>
using namespace std;
vector<int> v[1005];
bool visited[1005],check;
int n;

void run(int i) {
    // cout << i << "\n";
    if(visited[i]) {
        // cout << i << "\n";
        check=1;
        return ;
    }
    visited[i]=1;    
    if(v[i].size()==0) return ;    
    for(auto j: v[i]) run(j);
}

int main() {
    cin >> n;
    for(int i=1;i<=n;i++) {
        int m;
        cin >> m;
        for(int j=0;j<m;j++) {
            int a;
            cin >> a;
            v[i].push_back(a);
        }
    }
    for(int i=1;i<=n;i++) {
        check=0;
        memset(visited,0,sizeof(visited));
        run(i);
        if(check) cout << "YES\n";
        else cout << "NO\n";
    }
}