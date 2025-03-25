#include<bits/stdc++.h>
using namespace std;
int n,m,Q,sx,sy;
char s[30][30];
string q;
bool check;

void sol(int x,int y,int d,int idx) {
    if(idx==q.size()) {
        check=true ;
        return ;
    }
    if(x<0 || y<0 || x>=n || y>=m) return ;
    if(check) return ;
    if(s[x][y]!=q[idx]) return ;
    if(d==1) sol(x+1,y,d,idx+1);
    if(d==2) sol(x-1,y,d,idx+1);
    if(d==3) sol(x,y-1,d,idx+1);
    if(d==4) sol(x,y+1,d,idx+1);
    if(d==5) sol(x+1,y+1,d,idx+1);
    if(d==6) sol(x+1,y-1,d,idx+1);
    if(d==7) sol(x-1,y+1,d,idx+1);
    if(d==8) sol(x-1,y-1,d,idx+1);
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    cin >> n >> m;
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++){
            cin >> s[i][j];
            s[i][j]=tolower(s[i][j]);
        }
    }
    cin >> Q;
    for(int I=0;I<Q;I++) {
        check=false ;
        cin >> q;
        for(int i=0;i<q.size();i++) q[i]=tolower(q[i]);
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if(s[i][j]==q[0]) {
                    if(!check) {sx=i; sy=j;}
                    sol(i,j,1,0);
                    sol(i,j,2,0);
                    sol(i,j,3,0);
                    sol(i,j,4,0);
                    sol(i,j,5,0);
                    sol(i,j,6,0);
                    sol(i,j,7,0);
                    sol(i,j,8,0);
                    if(check) break ;
                }
            }
            if(check) break ;
        }
        cout << sx << " " << sy << "\n";
    }
}