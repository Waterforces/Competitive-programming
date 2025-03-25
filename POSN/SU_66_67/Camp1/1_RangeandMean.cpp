#include<bits/stdc++.h>
using namespace std;
int n,_min=INT_MAX,_max=INT_MIN,sum;

int main() {
    cin >> n;
    for(int i=0;i<n;i++) {
        int a;
        cin >> a;
        sum+=a;
        _min=min(_min,a);
        _max=max(_max,a);
    }
    cout << _max-_min << " ";
    cout << fixed << setprecision(2) << float(sum/n);
}