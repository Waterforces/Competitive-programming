#include<bits/stdc++.h>
using namespace std;
int n,k,cou,_max,tmp;
bool x[100005];
map<int,int> mp;

int main() {
    cin >> n >> k;
    for(int i=0;i<k;i++) {
        int a;
        cin >> a;
        if(a<=0 || a>n) continue ;
        x[a]=true;
    }
    for(int i=1;i<=n;i++) {
        if(!x[i]) cou++;
        else cou=0;
        if(_max<=cou) {
            _max=max(_max,cou);
            mp[i]=_max;
        }
    }
    cout << _max << "\n";
    for(auto i: mp) {
        if(i.second==_max) cout << i.first << " "; 
    } 
}