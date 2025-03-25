#include<bits/stdc++.h>
using namespace std;
int n,_min=INT_MAX,_max=INT_MIN;

int main() {
    cin >> n;
    for(int i=0;i<n;i++) {
        int a[5];
        for(int j=0;j<5;j++) cin >> a[j];
        sort(a,a+5);
        int diff=a[4]-a[0];
        _min=min(_min,diff);
        _max=max(_max,diff);
    }
    cout << _max << " " << _min << " " << _max-_min;
}