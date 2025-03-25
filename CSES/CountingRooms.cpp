#include<bits/stdc++.h>
using namespace std;
int n,m,cou;
bool visited[1005][1005];
char s[1005][1005];
 
void sol(int x,int y) {
    if(x<0 || y<0 || x>=n || y>=m || s[x][y]=='#' || visited[x][y]) return ;
    visited[x][y]=1;
    sol(x+1,y);
    sol(x-1,y);
    sol(x,y+1);
    sol(x,y-1);
}
 
int main() {
    cin >> n >> m;
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cin >> s[i][j];
        }
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            if(visited[i][j] || s[i][j]=='#') continue ;
            cou++;
            sol(i,j);
        }
    }
    cout << cou;
}