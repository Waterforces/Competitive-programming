#include<bits/stdc++.h>
using namespace std;
int s[105][105],n,m,k;

int main() {
    cin >> n >> m >> k;
    for(int i=0;i<k;i++) {
        int a,b;
        cin >> a >> b;
        s[a][b]=1;
    }
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=m;j++) {
            if(s[i][j]) cout << "x";
            else cout << "_";
        }
        cout << "\n";
    }
}