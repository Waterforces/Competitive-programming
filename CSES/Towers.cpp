#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;
int n;
vector<int> ans;
 
int main() {
    cin >> n;
    for(int i=0;i<n;i++) {
        int m;
        cin >> m;
        if(ans.size()==0) ans.push_back(m);
        else {
            int idx = upper_bound(ans.begin(),ans.end(),m) - ans.begin();
            if(idx>=ans.size()) ans.push_back(m);
            else ans[idx]=m;
        }
    }
    cout << ans.size();
}