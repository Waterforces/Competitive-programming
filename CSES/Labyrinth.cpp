#include<bits/stdc++.h>
#define endl '\n'
#define T tuple<int,int,int,char>
using namespace std;
int n,m,p[2][2],dist[1005][1005];
char s[1005][1005],com[1005][1005];
string ans;
queue<T> q;
 
int main() {
    cin >> n >> m;
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cin >> s[i][j];
            dist[i][j]=-1;
            if(s[i][j]=='A') {
                p[0][0]=i;
                p[0][1]=j;
            }
            if(s[i][j]=='B') {
                p[1][0]=i;
                p[1][1]=j;
            }
        }
    }
    q.push({p[0][0],p[0][1],0,'S'});
    while(!q.empty()) {
        auto [x,y,d,c] = q.front(); q.pop();
        if(dist[x][y]>=0 || s[x][y]=='#' || x<0 || y<0 || x>=n || y>=m) continue ;
        dist[x][y]=d;
        com[x][y]=c;
        if(s[x][y]=='B') break ;
        q.push({x+1,y,d+1,'D'});
        q.push({x-1,y,d+1,'U'});
        q.push({x,y+1,d+1,'R'});
        q.push({x,y-1,d+1,'L'});
    }
    // for(int i=0;i<n;i++) {
    //     for(int j=0;j<m;j++) cout << com[i][j];
    //     cout << endl;
    // }
    if(dist[p[1][0]][p[1][1]]==-1) cout << "NO";
    else {
        cout << "YES\n" << dist[p[1][0]][p[1][1]] << endl;
        int x=p[1][0],y=p[1][1];
        while(true) {
            if(com[x][y]=='S') break ;
            if(com[x][y]=='U') {
                ans+='U';
                x++;
            }
            else if(com[x][y]=='D') {
                ans+='D';
                x--;
            }
            else if(com[x][y]=='L') {
                ans+='L'; 
                y++;
            }
            else {
                ans+='R';
                y--;
            }
        }
        reverse(ans.begin(),ans.end());
        cout << ans;
    }
}