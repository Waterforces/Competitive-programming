#include<bits/stdc++.h>
using namespace std;
int n,m,q,cou,a[1005][1005];
bool visited[1005][1005];

void re() {
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=m;j++) {
            visited[i][j]=0;
        }
    }
}

void run(int x,int y) {
    if(x<=0 || y<=0 || x>n || y>m || visited[x][y] || a[x][y]==0) return ;
    // cout << a[x][y] << " " << cou << "\n";
    if(a[x][y]==2) cou++;
    visited[x][y]=true;
    run(x,y+1);
    run(x,y-1);
    run(x+1,y);   
    run(x-1,y);
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    cin >> n >> m;
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=m;j++) {
            cin >> a[i][j];
        }
    }
    cin >> q;
    while(q-->0) {
        int x,y;
        cin >> x >> y;
        cou=0;
        re();
        run(x,y);
        cout << cou << "\n";
    }
}