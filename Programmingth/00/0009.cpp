/*
Task: 0009
Type: Char
*/
#include<bits/stdc++.h>
using namespace std;
int main() {
    int a[4];
    char c;
    for(int i=0;i<3;i++) {
        cin >> a[i];
    }
    sort(a,a+3);
    for(int i=0;i<3;i++) {
        cin >> c;
        if(c=='A') {
            cout << a[0] << " ";
            continue ;
        }
        else if(c=='B') {
            cout << a[1] << " ";
            continue ;
        }
        else if(c=='C') {
            cout << a[2] << " ";
            continue ;
        }
    }
}
