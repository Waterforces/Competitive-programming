#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll a,b;
void input() {
    cin >> a >> b;
}
void process() {
    ll ans=__gcd(a,b);
    cout << ans;
}
int main() {
    input();
    process();
}