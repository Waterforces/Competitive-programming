#include<bits/stdc++.h>
using namespace std;
int n,m,a[5005];

int main() {
    cin >> n;
    for(int i=0;i<n;i++) cin >> a[i];
    cin >> m;
    if(m>=0) {
        for(int i=0;i<n;i++) cout << a[i]+m << " ";        
    }
    else {
        for(int i=n-1;i>=0;i--) cout << a[i]+m << " ";
    }
}