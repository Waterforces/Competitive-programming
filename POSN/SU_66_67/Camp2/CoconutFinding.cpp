#include<bits/stdc++.h>
using namespace std;
const int N=505;
char s[N][N];
bool visited[N][N];
int n,m,q;
int _max;

void re() {
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            visited[i][j]=false ;
        }
    }
}

void dfs(int x,int y,int dist,int cou) {
    cout << x << " " << y << endl;
    if(x<0 || y<0 || x>=n || y>=m) return ;
    if(visited[x][y]) return ;
    if(s[x][y]=='#') return ;
    if(s[x][y]<='7' && s[x][y]>='0') {
        re();
        s[x][y]=='.';
    }
    if(x==n-1 && y==n-1 && cou==q) {
        _max=max(_max,dist+1);
    } 
    visited[x][y]=true ;
    dfs(x,y+1,dist+1,cou);
    dfs(x,y-1,dist+1,cou);
    dfs(x+1,y,dist+1,cou);
    dfs(x-1,y,dist+1,cou);
}

int main() {
    cin >> n >> m >> q;
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cin >> s[i][j];
        }
    }
    dfs(0,0,0,0);
    cout << _max;
}