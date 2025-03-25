#include<bits/stdc++.h>
using namespace std;
long long n,m,a=3,b=1,ans;

int main() {
    cin >> n >> m;
    while(a!=n) {
        ans+=a*b;
        int tmp=a-b;
        a+=b;
        b=tmp;
    }
    cout << ans+(a*b);
}