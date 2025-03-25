#include<bits/stdc++.h>
using namespace std;
int a[5005];
bool b[10005];
int n,_i;
int main() {
    cin >> n;
    for(int i=0;i<n;i++) {
        int m;
        cin >> m;
        if(b[m]==0) {
            b[m]=1;
            a[_i]=m;
            _i++;
        }
    }
    sort(a,a+_i);
    for(int i=0;i<_i;i++) {
        cout << a[i] << " ";
    }
}
