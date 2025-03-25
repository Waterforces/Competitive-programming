#include<bits/stdc++.h>
using namespace std;
map<int,int> mp;
int n,_max,cou;

int main() {
    cin >> n;
    for(int i=0;i<n;i++) {
        int a;
        cin >> a;
        mp[a]++;
        cou=max(cou,mp[a]);
    }
    for(auto x: mp) {
        if(x.second==cou) _max=max(_max,x.first);
    }
    cout << _max << "\n" << cou;
}