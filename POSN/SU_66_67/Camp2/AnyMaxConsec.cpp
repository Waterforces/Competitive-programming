#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll a,n,c=1,_max,ans;
int main() {
    cin >> a;
    n=a;
    _max=1;
    ans=a;
    do {
        cin >> a;
        if(a==0) break ;
        if(a==n) {
            c++;
        }
        else {
            if(_max<c) ans=n;
            n=a;
            _max=max(_max,c);
            c=1;
         //   cout << a << "\t"<< ans << " " << _max << endl;
        }
    }
    while(true);
    cout << _max << endl << ans;
}
