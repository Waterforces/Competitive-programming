#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[1005][1005];
int a1,a2,b1,b2;
int c;

void run(int x,int y) {
    if(x<0 || y<0 || x>=n || y>=m) return ;
    a1=a[x][y];
    b1=a[x][y];
    for(int i=0;i<n;i++) {
        a1=max(a1,a[i][y]);
        b1=min(b1,a[i][y]);
    }
    a2=a[x][y];
    b2=a[x][y];
    for(int i=0;i<m;i++) {
        a2=min(a2,a[x][i]);
        b2=max(b2,a[x][i]);
    }
    //cout << a1 << " " << a2 << "----" << b1 << " " << b2 << endl;
    //printf("(%d, %d) =%d\n",x,y,a[x][y]);
    if(a1==a2 || b1==b2) printf("(%d, %d) = %d\n",x,y,a[x][y]);
    else c++;
}

int main() {
    cin >> n >> m;
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cin >> a[i][j];
        }
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            run(i,j);
        }
    }
    if(c==n*m) cout << "None";
}
