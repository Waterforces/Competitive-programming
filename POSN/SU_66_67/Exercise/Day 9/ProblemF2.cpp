#include<bits/stdc++.h>
using namespace std;
int x,y,ans=1;

void pwr() {
    while(y-->0) ans*=x;
}

int main() {
    cin >> x >> y;
    pwr();
    cout << ans;
}