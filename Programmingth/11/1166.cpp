#include<bits/stdc++.h>
using namespace std;
char s[35][35];
bool visited[35][35];
int n,m,cou,_max;

void run(int x,int y) {
    if(x<=0 || y<=0 || x>n || y>m || visited[x][y] || s[x][y]=='#') return ;
    visited[x][y]=1;
    // cout << x  << " " << y << " " << s[x][y] << "\n";
    if(s[x+1][y]=='#' || s[x-1][y]=='#' || s[x][y+1]=='#' || s[x][y-1]=='#') return ;
    s[x][y]='@';
    cou++;
    run(x+1,y);
    run(x-1,y);
    run(x,y+1);
    run(x,y-1);
}

int main() {
    cin >> n >> m;
    memset(s,'.',sizeof(s));
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=m;j++) {
            cin >> s[i][j];
        }
    }
    // for(int i=1;i<=n;i++) {
    //     for(int j=1;j<=m;j++) {
    //         cout << s[i][j];
    //     }
    //     cout << "\n";
    // }
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=m;j++) {
            if(visited[i][j]) continue ;
            // cout << i << " "<< j << " " << s[i][j] << "\n";
            if(s[i][j]=='.') {
                cou=0;
                run(i,j);
                _max=max(_max,cou);
            }
        }
    }
    // for(int i=1;i<=n;i++) {
    //     for(int j=1;j<=m;j++) {
    //         cout << s[i][j];
    //     }
    //     cout << "\n";
    // }
    cout << _max;
}