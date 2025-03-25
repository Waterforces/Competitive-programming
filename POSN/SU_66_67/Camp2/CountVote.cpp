#include<bits/stdc++.h>
using namespace std;
map<int,int> mp;
int n,m,_max;
int ans;
int main() {
    cin >> m >> n;
    for(int i=0;i<n;i++) {
        int a;
        cin >> a;
        mp[a]++;
        //cout << a << " " << mp[a] << endl;
        if(_max<mp[a]) {
            ans=a;
            _max=mp[a];
        }
    }
    cout << ans << endl << _max;
}
