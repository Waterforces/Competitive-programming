#include<bits/stdc++.h>
using namespace std;
int n,m,dp[100005];
vector<pair<int,int> > v;

int main() {
    cin >> n >> m;
    for(int i=1;i<=10000;i++) dp[i]=INT_MAX;
    for(int i=0;i<n;i++) {
        int a,bits=0;
        cin >> a;
        for(int j=0;j<m;j++) {
            int b;
            cin >> b;
            bits=(bits<<1) | b;
        }
        dp[bits]=min(dp[bits],a);
        v.push_back(make_pair(bits,a));
    }
    // for(auto [i,j]: v) cout << i << " " << j << endl;
    for(int i=0;i<=(1<<m)-1;i++) {
        for(int j=0;j<n;j++) {
            if(dp[i]==INT_MAX) continue ;
            auto [bits,a] = v[j];
            dp[(i | bits)]=min(dp[(i | bits)],dp[i]+a);
            // cout << i << " " << bits << " " <<  (i | bits) << endl;
        }
    }
    cout << dp[(1<<m)-1];
}