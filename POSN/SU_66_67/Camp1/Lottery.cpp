#include<bits/stdc++.h>
using namespace std;
int n,m,cou;
map<string,vector<string> > mp;

int main() {
    cin >> n;
    for(int i=0;i<n;i++) {
        string s;
        cin >> s;
        string t="";
        t+=s[3]; t+=s[4]; t+=s[5];
        mp[t].push_back(s);
    }
    cin >> m;
    for(int i=0;i<m;i++) {
        string s;
        cin >> s;
        cou+=mp[s].size();
    }
    cout << cou;
    // for(auto [x,y]: mp) {
    //     cout << x << "\n";
    //     for(auto i: y) {
    //         cout << i << " ";
    //     }
    //     cout << endl;
    // }
}