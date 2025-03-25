#include<bits/stdc++.h>
using namespace std;
int a,sum;

int main() {
    for(int i=10;i>=2;i--) {
        cin >> a;
        sum+=a*i;
    }
    if(sum%11==0) cout << 0;
    else cout << 11-(sum%11);
}