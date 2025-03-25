#include<bits/stdc++.h>
using namespace std;
map<int,pair<string,int> > mp;
int n,_min=INT_MAX;

int main() {
    for(int i=1;i<=8;i++) {
        string s;
        cin >> s;
        mp[i].first=s;
    }
    cin >> n;
    for(int i=0;i<n;i++) {
        int a;
        cin >> a;
        mp[a].second++;
    }
    for(auto x: mp) {
        _min=min(_min,x.second.second);
    }
    for(auto x: mp) {
        if(x.second.second!=_min) cout << x.second.first << endl;
    }
}
