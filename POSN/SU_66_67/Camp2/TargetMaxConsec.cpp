#include<bits/stdc++.h>
using namespace std;
long long n,c,_c,ans,a;
int main() {
    cin >> n;
    do {
        cin >> a;
        if(a==n) c++;
        if(a==n) _c++;
        else {
            ans=max(ans,_c);
            _c=0;
        }
    }
    while(a!=0);
    cout << ans << endl << c;
}
