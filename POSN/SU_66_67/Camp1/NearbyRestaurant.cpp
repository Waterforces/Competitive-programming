#include<bits/stdc++.h>
using namespace std;
int sx,sy,r,n,a[10005];

int main() {
    cin >> sx >> sy >> r;
    cin >> n;
    for(int i=0;i<n;i++) {
        int x,y;
        cin >> x >> y;
        a[i]=abs(sx-x)+abs(sy-y);
    } 
    sort(a,a+n);
    for(int i=0;i<n;i++) {
        if(a[i]>r) {
            cout << i;
            return 0;
        }
    }
    cout << 0;
}