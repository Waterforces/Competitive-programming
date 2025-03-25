#include<bits/stdc++.h>
using namespace std;
map<int,int> mp;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    for(int i=0;i<12;i++) {
        int n;
        while(cin >> n) {
            if(n==0) break ;
            mp[n]++; 
        }
    }
    for(auto x: mp) {
        if(x.second<10) cout << x.first << " " << x.second << "\n";
    }
}