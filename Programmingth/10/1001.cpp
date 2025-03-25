#include<bits/stdc++.h>
using namespace std;
int n,m;
char s[21][21];
int a[21];
void check(int x,int y) {
    if(x>=n || s[x][y]=='O' || s[x][y]=='#') {
        s[x-1][y]='#';
        return ;
    } 
    check(x+1,y);
}
int main() {
    cin >> n >> m;
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cin >> s[i][j];
        }
    }
    for(int i=0;i<m;i++) {
        cin >> a[i];
    }
    for(int i=0;i<m;i++) {
        if(a[i]>0) {
            for(int j=0;j<a[i];j++) {
                check(0,i);
            }
        }
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cout << s[i][j];
        }
        cout << endl;
    }
}