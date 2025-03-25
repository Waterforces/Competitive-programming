#include<bits/stdc++.h>
using namespace std;
int n,m,cou,ans,a[100005],b[105];

int main() {
    cin >> n >> m;
    for(int i=0;i<m;i++) {
        cin >> a[i];
        b[a[i]]++;
        // cout << a << " " << mp[a] << '\n';
    }
    for(int i=0;i<m;i++) {
        // cout << i <<  " " << j << "\n";
        if(cou<b[a[i]]) {
            cou=b[a[i]];
            ans=a[i];
        }
    }
    cout << ans << "\n" << cou;
}