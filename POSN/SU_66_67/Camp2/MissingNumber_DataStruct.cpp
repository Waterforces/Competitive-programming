#include<bits/stdc++.h>
using namespace std;
int n,_max,_min=INT_MAX;
bool a[100005],check;

int main() {
    cin >> n;
    for(int i=0;i<n;i++) {
        int m;
        cin >> m;
        a[m]=1;
        _min=min(_min,m);
        _max=max(_max,m);
    }
    cout << _min << " " << _max << "\n";
    for(int i=_min;i<=_max;i++) {
        if(a[i]==0) {
            cout << i << " ";
            check=1;
        }
    }
    if(!check) cout << "no missing number";
}