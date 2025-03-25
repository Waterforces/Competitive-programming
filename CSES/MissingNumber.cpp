#include<bits/stdc++.h>
using namespace std;
int n,a[200005];
 
int main() {
    cin.tie(0)->sync_with_stdio(0);
    cin >> n;
    for(int i=0;i<n;i++) {
        int m;
        cin >> m;
        a[m]++;
    }
    for(int i=1;i<=n;i++) {
        if(!a[i]) {
            cout << i;
            return 0;
        }
    }   
}