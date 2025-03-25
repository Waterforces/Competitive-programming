#include<bits/stdc++.h>
using namespace std;
int n,a[6],_max;

int main() {
    cin >> n;
    for(int i=0;i<n;i++) {
        int x;
        cin >> x;
        a[x]++;
    }
    for(int i=1;i<=5;i++) {
        cout << a[i] << "\n";
        _max=max(_max,a[i]);
    }
    cout << "Popular: " << _max;
}