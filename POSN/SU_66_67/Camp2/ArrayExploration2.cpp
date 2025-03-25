#include<bits/stdc++.h>
using namespace std;
int n,m,q,a[500][500],ans[10],k[10];

int main() {
    cin >> n >> m;
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=m;j++) {
            cin >> a[i][j];
        }
    }
    cin >> q;
    while(q-->0) {
        int x,y;
        cin >> x >> y;
        if(x<=0 || x>n || y<=0 || y>m) x=k[0],y=k[1];
        // cout << a[x][y] << endl;
        if(a[x][y]>0) ans[0]++;
        if(a[x][y]<0) ans[1]++;
        if(abs(a[x][y])%2==0) ans[2]++;
        if(abs(a[x][y])%2==1) ans[3]++;  
        // for(int i=0;i<4;i++) cout << ans[i] << " ";
        // cout << endl;
        k[0]=x; k[1]=y;
    }
    for(int i=0;i<4;i++) cout << ans[i] << " ";
}