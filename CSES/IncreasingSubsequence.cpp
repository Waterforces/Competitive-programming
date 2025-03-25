#include<bits/stdc++.h>
using namespace std;
int n;
vector<int> ans;
 
int main() {
    cin >> n;
    for(int i=0;i<n;i++) {
        int a;
        cin >> a;
        if(ans.size()==0) ans.push_back(a);
        else {
            int idx = lower_bound(ans.begin(),ans.end(),a)-ans.begin();
            if(idx<ans.size()) ans[idx]=a;
            else ans.push_back(a);
        }
    }
    cout << ans.size();
    // cout << endl;
    // for(auto i: ans) cout << i << " ";
}