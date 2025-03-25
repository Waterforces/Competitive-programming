#include<bits/stdc++.h>
using namespace std;
int n,t[3];

int main() {
    cin >> n;
    for(int i=0;i<n;i++) {
        int a,idx=0,_min=t[0];
        cin >> a;
        for(int j=0;j<3;j++) {
            if(t[j]<_min) {
                _min=t[j];
                idx=j;
            }
        }
        t[idx]+=a;
        cout << char('A'+idx) << "\n";
    }
}