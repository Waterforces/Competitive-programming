#include<bits/stdc++.h>
using namespace std;
const int N=30;
array<array<int,N>,N> dp,a;
int n,q1,q2,_max=-10;

void run(int x,int y,int k) {
    // cout << x << " " << y << endl;
    if(a[x][y]==100) return ;
    if(x<=0 || y<=0 || x>n || y>n || k>=a[x][y]) {
        _max=max(_max,a[x][y]);
        return ;
    }
    _max=max(_max,a[x][y]);
    // cout << _max << endl;
    run(x,y+1,a[x][y]);
    run(x,y-1,a[x][y]);
    run(x+1,y,a[x][y]);
    run(x-1,y,a[x][y]);
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    cin >> n;
    cin >> q1 >> q2;
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++) {
            cin >> a[i][j];
        }
    }
    run(q2,q1,-10);
    cout << _max;
}