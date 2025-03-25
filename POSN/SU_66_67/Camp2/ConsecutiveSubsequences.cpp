#include<bits/stdc++.h>
using namespace std;
int n;
vector<int> v,ans,q;

int main() {
    while(cin >> n) v.push_back(n);
    sort(v.begin(),v.end());
    q.push_back(v[0]);
    for(auto i: v) {
        if(q[q.size()-1]==i) continue ;
        if(q[q.size()-1]+1!=i) {
            if(q.size()>ans.size()) {
                ans.clear();
                for(auto j: q) ans.push_back(j);
            }
            q.clear();
        }
        q.push_back(i);
    }
    for(auto i: ans) cout << i << " ";
}