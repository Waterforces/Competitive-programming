#include<bits/stdc++.h>
using namespace std;
int n,a[10],_min=100,_max,sum,b[10];

int main() {
    cin >> n;
    for(int i=0;i<n;i++) cin >> a[i];
    if(n==3) {
        cout << a[0]+a[1]+a[2];
    }
    else {
        for(int i=0;i<n;i++) {
            if(b[i]==1) {
                b[i]++;
                continue ;
            }
            b[i]++;
            sum+=a[i];
            _min=min(_min,a[i]);
            _max=max(_max,a[i]);
        }
        // cout << _min << " " << _max << "\n";
        cout << sum-_min-_max;
    }
}