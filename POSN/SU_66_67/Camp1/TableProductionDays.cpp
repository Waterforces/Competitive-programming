#include<bits/stdc++.h>
using namespace std;
double a,b,n,m;

int main() {
    cin >> a >> b >> n >> m;
    if((a==0 && n>0) || (b==0 && m>0)) cout << "Unable to finish order";
    else {
        int x=0,y=0;
        if(n!=0) x=ceil(n/(6*a));
        if(m!=0) y=ceil(m/(10*b));
        // cout << x << " " << y << "\n";
        cout << max(x,y);
    }
}