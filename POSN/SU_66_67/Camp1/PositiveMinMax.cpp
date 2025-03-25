#include<bits/stdc++.h>
using namespace std;
int _min=INT_MAX,_max=INT_MIN;

int main() {
    for(int i=0;i<8;i++) {
        int a;
        cin >> a;
        if(a<=0) continue ;
        _min=min(_min,a);
        _max=max(_max,a);
    }
    cout << _max << "\n" << _min;
}