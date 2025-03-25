#include<bits/stdc++.h>
using namespace std;
int n,til[20][20],area,ans;

void flood(int x,int y,int ch) {
    if(x<0 || y<0 || x>=n || y>=n || til[x][y]!=ch ) return ;
    til[x][y]=0;
    area++;
    flood(x,y+1,ch);
    flood(x,y-1,ch);
    flood(x+1,y,ch);
    flood(x-1,y,ch);
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    cin >> n;
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cin >> til[i][j];
        }
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(til[i][j]==0) continue ;
            if(til[i][j]==til[i+1][j] && til[i+1][j]==til[i+2][j]) {til[i][j]=til[i+1][j]=til[i+2][j]=0; continue ;}
            if(til[i][j]==til[i][j+1] && til[i][j+1]==til[i][j+2]) {til[i][j]=til[i][j+1]=til[i][j+2]=0; continue ;}
            area=0;
            flood(i,j,til[i][j]);
            if(area==3) ans++;
        }
    }
    cout << ans;
}