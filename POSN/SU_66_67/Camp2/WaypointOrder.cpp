#include<bits/stdc++.h>
using namespace std;
int s[105][105];
int n,m,k,x,y;
int c=1;
int main() {
    cin >> n >> m >> k;
    for(int i=0;i<k;i++) {
        cin >> x >> y;
        s[x-1][y-1]=c;
        c++;
        //cout << s[x][y] << endl;
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cout << s[i][j] << " ";
        }
        cout << endl;
    }
}
