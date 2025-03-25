#include<bits/stdc++.h>
using namespace std;
int n;
int a[100005];
int m,k;
int x,y,z,_max;
int main() {
    cin >> n >> m;
    for(int i=0;i<m;i++) {
        cin >> k;
        if(k<=0 || k>n) {
            y++;
            //cout << k << endl;
        }
        else if(a[k]==0) {
            a[k]++;
            x++;
        }
        else {
            a[k]++;
            z++;
            _max=max(_max,a[k]);
        }
    }
    cout << x << endl << y << endl << z << endl;
    for(int i=1;i<=n;i++) {
        if(a[i]==_max) cout << i << " ";
    }
}
