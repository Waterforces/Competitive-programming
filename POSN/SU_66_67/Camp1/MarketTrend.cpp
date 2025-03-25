#include<bits/stdc++.h>
using namespace std;
int n,a[10005],_max,tmp=INT_MAX,cou;

int main() {
    cin >> n;
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=0;i<n;i++) {
        if(tmp>=a[i]) {
            _max=max(_max,cou);
            cou=0;
        }
        else cou++;
        tmp=a[i];
    }
    _max=max(_max,cou);
    if(_max==0) cout << "No value increase";
    else cout << _max;
}