#include<bits/stdc++.h>
using namespace std;
long long n,a[2500000],q,check=1;

int main() {
    cin >> n;
    for(int i=0;i<n;i++) cin >> a[i];
    cin >> q;
    for(int i=0;i<n;i++) {
        if(a[i]==q) {
            cout << i+1 << " ";
            check=0;
        }
    }
    if(check) cout << 0;
}