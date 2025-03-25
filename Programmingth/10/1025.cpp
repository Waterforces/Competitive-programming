#include<bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio();
    int lcm=1,n;
    cin >> n;
    for(int i=0;i<n;i++) {
        int a;
        cin >> a;
        lcm=lcm/__gcd(lcm,a)*a;
    }
    cout << lcm;
}