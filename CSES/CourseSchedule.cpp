#include<bits/stdc++.h>
using namespace std;
typedef struct node {
    vector<int> v;
    int sq;
} node;
int n,m;
node x[100005];
vector<int> ans;
queue<int> q;
 
int main() {
    cin >> n >> m;
    for(int i=0;i<m;i++) {
        int a,b;
        cin >> a >> b;
        x[a].v.push_back(b);
        x[b].sq++;
    }
    for(int i=1;i<=n;i++) {
        if(x[i].sq==0) q.push(i);
    }
    cout << "\n";
    while(!q.empty()) {
        auto i =q.front(); q.pop();
        ans.push_back(i);
        for(auto j: x[i].v) {
            x[j].sq--;
            if(x[j].sq==0) q.push(j);
        }
    }
    if(ans.size()!=n) cout << "IMPOSSIBLE";
    else for(auto i: ans) cout << i << " ";
}
