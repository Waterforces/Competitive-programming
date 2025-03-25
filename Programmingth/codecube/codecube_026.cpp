#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int> > v;
int _max,n,cou;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    cin >> n;   
    for(int i=0;i<n;i++) {
        int a,b;
        cin >> a >> b;
        v.push_back({a,1});
        v.push_back({b,-1});
    }
    sort(v.begin(),v.end());
    for(auto [i,j]: v) {
        cou+=j;
        _max=max(_max,cou);
    }
    cout << _max;
}