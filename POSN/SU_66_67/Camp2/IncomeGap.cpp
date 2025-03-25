#include<bits/stdc++.h>
using namespace std;
int n,_min=INT_MAX,_max=INT_MIN;
int maxs=INT_MIN,mins=INT_MAX;
int main() {
    cin >> n;
    for(int i=0;i<n;i++) {
        _max=INT_MIN;
        _min=INT_MAX;
        for(int j=0;j<5;j++) {
            int a;
            cin >> a;
            _max=max(_max,a);
            _min=min(_min,a);
        }
        int sum=_max-_min;
        maxs=max(maxs,sum);
        mins=min(mins,sum);
    }
    cout << maxs << " " << mins << " " << maxs-mins;
}
