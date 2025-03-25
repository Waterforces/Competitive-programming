#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
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
            if(idx>=ans.size()) ans.push_back(a);
            else ans[idx]=a;
        }
    }
    cout << ans.size();
}