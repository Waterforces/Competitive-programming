#include<bits/stdc++.h>
using namespace std;
int a[10][10],n,h,v;
bool visited[10][10];

void re() {
    for(int i=1;i<=8;i++) {
        for(int j=1;j<=8;j++) {
            visited[i][j]=0;
        }
    }
}

void run(int x,int y,int tmp,int type) {
    // cout << "A\n";
    if(x<=0 || y<=0 || x>8 || y>8 || visited[x][y] || a[x][y]!=tmp) return ;
    visited[x][y]=1;
    if(type==1) {
        if(a[x][y]==tmp) h++;
        run(x,y+1,tmp,type);
        run(x,y-1,tmp,type);
    }
    else {
        if(a[x][y]==tmp) v++;
        run(x+1,y,tmp,type);
        run(x-1,y,tmp,type);
    }
}

void change(int x,int y,int t) {
    // cout << "A\n";
    h=v=0;
    if(t==0 && y-1>0) swap(a[x][y],a[x][y-1]);
    else if(t==1 && x-1>0) swap(a[x][y],a[x-1][y]);
    else if(t==2 && y+1<=8) swap(a[x][y],a[x][y+1]);
    else if(t==3 && x+1<=8) swap(a[x][y],a[x+1][y]);
    re();
    run(x,y,a[x][y],1);
    re();
    run(x,y,a[x][y],2);
    // cout << x << " " << y << " " << a[x][y] << "\n";
    cout << "H " << h << " V " << v << "\n";
}

int main() {
    for(int i=1;i<=8;i++) {
        for(int j=1;j<=8;j++) {
            cin >> a[i][j];
        }
    }
    cin >> n;
    for(int i=0;i<n;i++) {
        int x,y,t;
        cin >> y >> x >> t;
        change(x,y,t);
    }
    // for(int i=1;i<=8;i++) {
    //     for(int j=1;j<=8;j++) {
    //         cout << a[i][j] << " ";
    //     } cout << endl;
    // }
}