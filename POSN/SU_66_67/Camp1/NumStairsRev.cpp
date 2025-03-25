#include<bits/stdc++.h>
using namespace std;
int n,a[11],idx;

int main() {
    cin >> n;
    idx=n-1;
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=0;i<n;i++,idx--) {
        for(int j=0;j<=i;j++) {
            cout << a[idx];
        }
        cout << "\n";
    }
}