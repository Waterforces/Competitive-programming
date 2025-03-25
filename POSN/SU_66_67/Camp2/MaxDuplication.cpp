#include<bits/stdc++.h>
using namespace std;
map<int,int> mp;
int _max,v;
int main() {
    int n;
    cin >> n;
    for(int i=0;i<n;i++) {
        int a;
        cin >> a;
        mp[a]++;
        if(_max<mp[a]) {

            _max=mp[a];
            v=a;
            //cout << a << " " << _max << " " << v << endl;
        }
        if(v<a && _max==mp[a]) v=a;
    }
    /*for(auto x: mp) {
        cout << x.first << " " << x.second << endl;
    }*/
    cout << v << endl << _max;
}
