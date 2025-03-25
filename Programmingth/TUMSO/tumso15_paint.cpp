#include<bits/stdc++.h>
using namespace std;
int dx[4]={0,1,0,-1},dy[4]={1,0,-1,0};
char s[1010][1010];

int main() {
    cin.tie()->sync_with_stdio();
    int Q;
    cin >> Q;
    while(Q--) {
        int n,m,cou=0;
        cin >> n >> m;
        queue<pair<int,int> > q;
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                cin >> s[i][j];
            }
        }
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if(s[i][j]=='*') continue ;
                cou++;
                q.push({i,j});
                s[i][j]='*';
                while(!q.empty()) {
                    auto [x,y] = q.front(); q.pop();
                    for(int l=0;l<4;l++) {
                        if(x+dx[l]<0 || y+dy[l]<0 || x+dx[l]>=n || y+dy[l]>=m || s[x+dx[l]][y+dy[l]]=='*') continue ;
                        s[x+dx[l]][y+dy[l]]='*';
                        q.push({x+dx[l],y+dy[l]});
                    }
                }
            }
        }
        cout << cou << endl;
    }
}