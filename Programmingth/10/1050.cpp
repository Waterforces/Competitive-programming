#include<bits/stdc++.h>
using namespace std;
map<vector<int>,int> mp;
vector<int> q;
int n,m;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    cin >> n >> m;
    for(int i=1;i<=n;i++) {
        vector<int> v;
        for(int j=0;j<m;j++) {
            int a;
            cin >> a;
            v.push_back(a);
        }
        mp[v]=i;
    }
    for(int i=0;i<m;i++) {
        int a;
        cin >> a;
        q.push_back(a);
    }
    if(mp[q]>0) cout << mp[q];
    else {
        for(auto [i,idxi] : mp) {
            // cout << idxi << endl;
            vector<int> ch;
            for(int j=0;j<m;j++) ch.push_back(q[j]-i[j]);
            // for(auto j: ch) cout << j << " ";
            // cout << " " << mp[ch] << "\n";
            if(mp.count(ch) && idxi!=mp[ch]) {
                cout << min(idxi,mp[ch]) << " " << max(idxi,mp[ch]);
                return 0;
            }
        }
        cout << "NO";
    }
}