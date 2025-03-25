#include<bits/stdc++.h>
using namespace std;
int n,m;
vector<int> ans;

int main() {
    cin >> n >> m;
    while(n>0) {
        int mod = n%m;
        ans.push_back(mod);
        n/=m;
    }
    for(int i=ans.size()-1;i>=0;i--) cout << ans[i];
}