#include<bits/stdc++.h>
using namespace std;
char s[30][30];
int n,m,a[30];

void run(int x,int y) {
    if(x<=0 || y<=0 || x>n || y>m || s[x][y]!='#') return ;
    if(s[x+1][y]=='.') swap(s[x][y],s[x+1][y]);
    run(x+1,y);
}

int main() {
    cin >> n >> m;
    memset(s,'O',sizeof(s));
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=m;j++) {
            cin >> s[i][j];
        }
    }
    for(int i=1;i<=m;i++) cin >> a[i];
    for(int i=1;i<=m;i++) {
        while(a[i]-->0) {
            if(s[1][i]=='.') {
                s[1][i]='#';
                run(1,i);
            }
        }
    }
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=m;j++) {
            cout << s[i][j];
        }
        cout << "\n";
    }
}