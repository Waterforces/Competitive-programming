#include<bits/stdc++.h>
using namespace std;
int main() {
    for(int i=0;i<5;i++) {
        char a[2],b[2];
        cin >> a[0] >> a[1] >> b[0] >> b[1];
        if(a[0]==a[1] && b[0]==b[1] && a[0]==b[0]) {
            cout << "D";
            continue ;
        }
        if(a[0]==a[1] && b[0]==b[1]) {
            cout << "W";
            continue ;
        }
        if(a[0]==a[1] && b[0]!=b[1]) {
            cout << "W";
            continue ;
        }
        if(a[0]!=a[1] && b[0]==b[1]) {
            cout << "L";
            continue ;
        }
        int m1=min(a[0],a[1]);
        int m2=min(b[0],b[1]);
        if(m1<m2) {
            cout << "W";
            continue ;
        }
        else if(m1>m2){
            cout << "L";
        }
        else cout << "D";
    }
}
