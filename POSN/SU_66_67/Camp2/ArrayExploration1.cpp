#include<bits/stdc++.h>
using namespace std;
int n,m,q,a[500][500],ans[4];

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
        if(x<=0 || x>n || y<=0 || y>m) continue ;
        if(a[x][y]>0) ans[0]++;
        if(a[x][y]<0) ans[1]++;
        if(abs(a[x][y])%2==0) ans[2]++;
        if(abs(a[x][y])%2==1) ans[3]++; 
        // for(int i=0;i<4;i++) cout << ans[i] << " ";
        // cout << endl;
    }
    for(int i=0;i<4;i++) cout << ans[i] << " ";
}
/*
4 6 
 0 -1  2  3 -3 -7 
11  7 -4 12 17 -6 
-7 12 11 -9 -1  0 
 0 -2  8 10 -5  8 
10 
4 2 
1 1 
-3 2 
2 0 
3 4 
2 6 
1 4 
4 5 
3 7 
5 2 
*/