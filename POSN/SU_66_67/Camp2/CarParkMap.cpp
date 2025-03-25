#include<bits/stdc++.h>
using namespace std;
bool s[105][105];
int n,m,k;
int main() {
    cin >> n >> m >> k;
    for(int i=0;i<k;i++) {
        int x,y;
        cin >> x >> y;
        s[x][y]=1;
    }
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=m;j++) {
            if(s[i][j]==1) cout << "x";
            else cout << "_";
        }
        cout << endl;
    }
}
