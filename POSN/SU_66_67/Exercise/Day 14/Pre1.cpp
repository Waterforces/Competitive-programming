#include<bits/stdc++.h>
using namespace std;
int n,q;
int a[100],b[100],c;

int main() {
    cin >> n;
    for(int i=0;i<n;i++) cin >> a[i];
    cin >> q;
    for(int i=0;i<q;i++) cin >> b[i];
    for(int i=0,j=0;i<n;i++) {
        if(a[i]==b[j]) {
            c++;
            j++;
        }
    }
    if(c==q) cout << "yes";
    else cout << "no";
}