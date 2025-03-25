#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;
int n,m,a[1005][1005],sum,x4[4]={1,-1,0,0},y4[4]={0,0,1,-1};
bool visited[1005][1005];

void dfs(int x,int y) {
    int cnt = 0;
    visited[x][y]=1;
    // cout << x << " " << y << " " << a[x][y] << endl;
    for(int i=0;i<4;i++) {
        int nx = x + x4[i], ny = y + y4[i];
        // cout << nx << " " << ny << endl;
        if(nx<0 || ny<0 || nx>=n || ny>=m || a[nx][ny]==0) continue ;
        cnt++;
    }
    if(cnt==0) sum+=4;
    else if(cnt==1) sum+=3;
    else if(cnt==2) sum+=2;
    else if(cnt==3) sum+=1;
    // cout << x << " " << y << " " << sum << " " << cnt << endl;
    for(int i=0;i<4;i++) {
        int nx = x + x4[i], ny = y + y4[i];
        if(nx<0 || ny<0 || nx>=n || ny>=m || visited[nx][ny] || a[nx][ny]==0) continue ;
        dfs(nx,ny);
    }
}

int main() {
    cin >> n >> m;
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cin >> a[i][j];
        }
    }
    // dfs(0,1);
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            if(visited[i][j] || a[i][j]==0) continue ;
            dfs(i,j);
        }
    }
    cout << sum;
}