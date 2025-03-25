#include<bits/stdc++.h>
using namespace std;
typedef struct area {
    int x,y;
    char s;
} area;
const int N=3005;
char a[N][N],l[N][N];
char all[N][N];
bool visited[N][N];
int n,m;
int _max,cou;
queue<area> q;

void fill(int x,int y,char c) {
    if(x<0 || y<0 || x>=n || y>=m || visited[x][y] || all[x][y]!=c) return ;
    visited[x][y]=true ;
    cou++;
    // cout << c << " " << all[x][y] << "\n";
    q.push({x,y+1,all[x][y]});
    q.push({x,y-1,all[x][y]});
    q.push({x+1,y,all[x][y]});
    q.push({x-1,y,all[x][y]});
}   

int main() {
    cin.tie(0)->sync_with_stdio(0);
    cin >> n >> m;
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cin >> l[i][j];
        }
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cin >> a[i][j];
            if(a[i][j]==l[i][j]) {
                all[i][j]=a[i][j];
            }
            else {
                all[i][j]='*';
            }
        }
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            if(all[i][j]!='*') {
                if(visited[i][j]) continue ;
                q.push({i,j,all[i][j]});
                cou=0;
                while(!q.empty()) {
                    int x=q.front().x;
                    int y=q.front().y;
                    char s=q.front().s;
                    q.pop();
                    fill(x,y,s);
                }
                _max=max(_max,cou);
            }
        }
    }
    cout << _max;
}