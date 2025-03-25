#include<bits/stdc++.h>
using namespace std;
int n,m,cou;

int main() {
    cin >> n >> m;
    for(int i=0;i<n;i++) {
        int a[3];
        cin >> a[0] >> a[1] >> a[2];
        if(m==cou) {
            cout << "No\n";
            continue ;
        }
        int k=0;
        if(a[0]>=8) k++;
        if(a[1]>=8) k++;
        if(a[2]>=8) k++;
        if(k>=2) {
            cout << "Yes\n";
            cou++;
        }
        else {
            cout << "No\n";
        }
    }
    cout << cou;
}