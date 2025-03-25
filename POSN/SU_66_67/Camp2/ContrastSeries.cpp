#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n,m;
ll a=3,b=1,sum;
int main() {
    cin >> n >> m;
    while(a<=n && b<=m) {
        sum+=a*b;
        int tmp=a;
        a=a+b;
        b=tmp-b;
    }
    cout << sum;
}
