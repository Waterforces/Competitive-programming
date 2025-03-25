#include<bits/stdc++.h>
using namespace std;
int n,tmp,cou=1,_max;
vector<int> v;


int main() {
    while(cin >> n) {
        if(n<=0) break;
        v.push_back(n);
    }
    tmp=v[0]%2;
    for(int i=1;i<v.size();i++) {
        if(v[i]%2!=tmp) cou++;
        else {
            _max=max(_max,cou);
            cou=1;
        }
        tmp=v[i]%2;
    }
    _max=max(_max,cou);
    cout << _max/2;
}