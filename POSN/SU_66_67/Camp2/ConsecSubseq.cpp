#include<bits/stdc++.h>
using namespace std;
int n,col,cou,old,_max,ans;
set<int> s;
map<int,int> mp;

int main() {
    while(cin >> n) s.insert(n);
    for(auto& i:s) {
        if(old+1!=i) {
            if(_max<cou) {
                _max=cou;
                ans=col;
            }
            cou=0;
            col++;
        }
        mp[i]=col;
        old=i;
        cou++;
    }
    for(auto [x,y]:mp) {
        if(y==ans) cout << x << " ";
    }
}