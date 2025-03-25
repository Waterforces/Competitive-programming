#include<bits/stdc++.h>
using namespace std;
int n,ans=1;

int main() {
    cin >> n;
    if(n==2) {
        cout << 4;
        return 0;
    }
    int t=n*2-2,cou=2,i=1;
    while(t>2 && i<n*n) {
        if(cou==0) {
            cou=2;
            t-=4;
        }
        i+=t;
        ans+=i;
        // cout << i << " " << ans << "\n";
        cou--;
    }
    cout << ans;
}