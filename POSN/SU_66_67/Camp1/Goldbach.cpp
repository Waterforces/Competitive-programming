#include<bits/stdc++.h>
#define ll long long unsigned
using namespace std;
ll n;

int main() {
    while(cin >> n) {
        if(n==0) return 0;
        ll x=n*n-n+1;   
        // cout << x << "\n";
        if(x%2==1) cout << "Y " << x << "\n";
        else cout << "N\n";
    }
}