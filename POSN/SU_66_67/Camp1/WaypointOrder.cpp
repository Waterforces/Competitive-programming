#include<bits/stdc++.h>
using namespace std;
int a[105][105],n,m,k,cou=1;

int main() {
    cin >> n >> m >> k;
    for(int i=0;i<k;i++) {
        int x,y;
        cin >> x >> y;
        a[x][y]=cou++;
    }
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=m;j++) {
            cout << a[i][j] << " ";
        } 
        cout << "\n";
    }
}