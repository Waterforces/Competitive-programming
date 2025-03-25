#include <bits/stdc++.h>
using namespace std;
map<int,int> mp;
int col,req,last=1,ans;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n,m; cin >> n >> m;
    mp[1] = 0; mp[n+1] = 0;
    for(int i=0;i<m;i++) {
        int a,b; cin >> a >> b;
        mp[a]++; mp[b+1]--;
    }
    char c; cin >> c;
    if (c=='R') req = 0;
    else if (c=='G') req = 1;
    else if (c=='B') req = 2;
    for(auto [pos,val]:mp) {
        val = ((val % 3) + 3) % 3;
        ans += (pos - last) * ((req - col + 3) % 3);
        last = pos, col = (col + val) % 3;
    }
    cout << ans;
}