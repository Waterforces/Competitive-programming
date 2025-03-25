#include<bits/stdc++.h>
using ll = long long;
using namespace std;
ll n;
 
int main() {
    cin >> n;
    ll sum=n*(n+1)/2;
    if(sum%2==1) cout << "NO";
    else {
        cout << "YES\n";
        ll mid=sum/2;
        set<ll> s1,s2;
        for(ll i=n;i>=1;i--) {
            if(i<=mid) {
                mid-=i;
                s1.insert(i);
            }
            else s2.insert(i);
        }
        cout << s1.size() << "\n";
        for(auto x: s1) cout << x << " ";
        cout << "\n" << s2.size() << "\n";
        for(auto x: s2) cout << x << " ";
    }
}
