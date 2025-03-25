#include<bits/stdc++.h>
using namespace std;
int a[1005][1005];
int n,m,_max;

void dfs(int x,int y,int cou) {
    if(x<0 || y<0 || x>=n || y>=m) return ;
    if(a[x][y]) cou++;
    _max=max(_max,cou);
    dfs(x+1,y,cou);
    dfs(x,y+1,cou);
}

int main() {
    cin >> n >> m;
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cin >> a[i][j];
        }
    }
    dfs(0,0,0);
    cout << _max;
}
