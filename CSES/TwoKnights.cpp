#include<bits/stdc++.h>
using ll = long long;
using namespace std;
ll n;
 
int main() {
    cin >> n;
    for(ll i=1;i<=n;i++) {
        ll total_way=((i*i)*(i*i-1)/2);
        ll attack_ways=4*(i-1)*(i-2);
        cout << total_way-attack_ways << "\n";
    }
}