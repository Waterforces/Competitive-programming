#include<bits/stdc++.h>
using namespace std;
int n;
int a;
int _min=INT_MAX;
int ans;
int main() {
    cin >> n;
    for(int i=0;i<8;i++) {
        cin >> a;
        int x=abs(n-a);
        if(_min>x) {
            _min=x;
            ans=a;
        }
    }
    cout << ans;
//closest number
}
