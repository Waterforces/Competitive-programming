#include<bits/stdc++.h>
using namespace std;
int n,m,x,y,b,s;

int main() {
    cin >>  x >> y >> n >> m;
    b=2*n+m;
    s=6*n+4*m;
    if(b<=x && s<=y) {
        cout << "Yes " << x-b << " " << y-s;
    }
    else {
        cout << "No ";
        if(b>x) cout << b-x << " ";
        else cout << "0 ";
        if(s>y) cout << s-y;
        else cout << "0";

    }
}