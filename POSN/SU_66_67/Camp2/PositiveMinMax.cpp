#include<bits/stdc++.h>
using namespace std;
int n,_min=INT_MAX,_max=INT_MIN;
int main() {
    for(int i=0;i<8;i++) {
        cin >> n;
        if(n<=0) continue ;
        _min=min(_min,n);
        _max=max(_max,n);
    }
    cout << _max << endl << _min;
}