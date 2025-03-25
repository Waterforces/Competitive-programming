#include<bits/stdc++.h>
using namespace std;

int pwr(int x,int y) {
    int ans=1;
    while(y-->0) ans*=x;
    return ans;
}

int main() {
    int x,y;
    cin >> x >> y;
    cout << pwr(x,y);
}