#include<bits/stdc++.h>
using namespace std;
int n,m,k;
vector<int> v,ans;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    cin >> n >> m >> k;
    for(int i=0;i<m;i++) {
        int a,b;
        cin >> a >> b;
        v.push_back(a);
        v.push_back(a+b);
    }
    sort(v.begin(),v.end());
    v.push_back(n+1);
    ans.push_back(1);
    for(int i=0;i<v.size()-1;i++) {
        if(v[i]!=v[i+1]) ans.push_back(v[i]);
        else i++;
    }
    // for(auto i: ans) cout << i << " ";
    // cout << "\n";
    ans.push_back(n+1);
    for(int i=0;i<k;i++) {
        int a;
        cin >> a;
        int idx=upper_bound(ans.begin(),ans.end(),a)-ans.begin();
        // cout << idx << "\n";
        cout << ans[idx]-ans[idx-1] << '\n';
    }
}