#include<bits/stdc++.h>
using namespace std;
const int N=105;
array<array<int,N>,N> a,dp,b;
int n,m,k;

bool check(int x,int y);
void dis();
void re();

void run(int x,int y) {
    // cout << x << " " << y << "-- " << a[x][y] << " " << b[x][y] << endl;
    if(check(x,y)) return ;
    int q=a[x][y];
    b[x][y]=true;
    if(q==1) {
        run(x-1,y);
        return ;
    }
    else if(q==2) {
        run(x,y+1);
        return ;
    }
    else  if(q==3) {
        run(x+1,y);
        return ;
    }
    else {
        run(x,y-1);
        return ;
    }
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    cin >> m >> n >> k;
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=m;j++) {
            cin >> a[i][j];
        }
     }
    //  dis();
    for(int i=0;i<k;i++) {
        int x,y;
        re();
        cin >> y >> x; 
        run(x,y);
    }
}

bool check(int x,int y) {
    if(x<=0) {
        cout << "N\n";
        return true;
    }
    if(y<=0) {
        cout << "W\n";
        return true;
    }
    if(x>n) {
        cout << "S\n";
        return true;
    }
    if(y>m) {
        cout << "E\n";
        return true;
    }
    if(b[x][y]) {
        cout << "NO\n";
        return true;
    }
    return false ;
}

void re() {
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=m;j++) {
            b[i][j]=false;
        }
    }
}

void dis() {
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=m;j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}