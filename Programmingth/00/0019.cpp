#include<bits/stdc++.h>
using namespace std;
int n,s[20],b[20];
int _s=1,_b;
int _min=INT_MAX;
int main() {
    cin >> n;
    for(int i=0;i<n;i++) cin >> s[i] >> b[i];
    int all=(1<<n);
    for(int i=1;i<all;i++) {
        _s=1;
        _b=0;
        for(int j=0;j<n;j++) {
            if(i & (1<<j)) {
                _s*=s[j];
                _b+=b[j];
            }
        }
        _min=min(_min,abs(_s-_b));
    }
    cout << _min;
}