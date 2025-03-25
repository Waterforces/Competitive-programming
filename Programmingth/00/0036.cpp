#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n,ans=1;

int main() {
    cin >> n;
    n+=n%2;
    for (int i=n;i>(n/2);i--) ans *= i;
    for (int i=1;i<=(n/2);i++) ans /= i; 
    cout << ans;
}