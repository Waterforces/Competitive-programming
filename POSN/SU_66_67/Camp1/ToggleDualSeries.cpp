#include<bits/stdc++.h>
using namespace std;
int a,b,n,m,mul=1;

int main() {
    cin >> n >> m;
    for(int i=1;i<=n;i+=2) {
        a+=mul*i;
        mul*=-1;
    }
    mul=1;
    for(int i=0;pow(2,i)<=m;i++) {
        // cout << b << " " << pow(2,i) << endl;
        b+=pow(2,i)*mul;
        mul*=-1;
    } 
    // cout << a << " " << b << "\n";
    cout << a*b;
}