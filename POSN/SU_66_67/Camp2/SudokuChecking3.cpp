#include<bits/stdc++.h>
using namespace std;
int a[10][10];

void sol(int x,int y) {
    bool cou[10]={0};
    int w[10]={0,1,1,1,4,4,4,7,7,7};
    int h[10]={0,1,1,1,4,4,4,7,7,7};
    for(int i=1;i<=9;i++) cou[a[i][y]]=1;
    for(int i=1;i<=9;i++) cou[a[x][i]]=1;
    for(int i=h[x];i<=h[x]+2;i++) {
        for(int j=w[y];j<=w[y]+2;j++) {
            cou[a[i][j]]=1;
        }
    }
    cout << x << " " << y << " ";
    for(int i=1;i<=9;i++) {
        if(!cou[i]) cout << i << " ";
    }
    cout << endl;
}

int main() {
    for(int i=1;i<=9;i++) {
        for(int j=1;j<=9;j++) {
            cin >> a[i][j];
        }
    }
    for(int i=1;i<=9;i++) {
        for(int j=1;j<=9;j++) {
            if(a[i][j]==0) sol(i,j);
        }
    }
}