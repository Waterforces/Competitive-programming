#include<bits/stdc++.h>
using namespace std;
int x,y,cou;

int main() {
    cin >> x >> y;
    if(y<x) swap(x,y);
    for(int i=0;i<8;i++) {
        int a;
        cin >> a;
        if(a>=x && a<=y) cou++;
    }
    if(cou==0) cout << "None";
    else cout << cou;
}