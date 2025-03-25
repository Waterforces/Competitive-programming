#include<bits/stdc++.h>
#define ll long long
using namespace std;
int n;
ll mod=1e9+7;
 
ll pwr(int a,int b) {
    if(b==0) return 1;
    if(b==1) return a;
    ll tmp=pwr(a,b/2);
    tmp*=tmp;
    tmp%=mod;
    if(b%2) tmp*=a;
    return tmp%mod;
}
 
int main() {
    cin >> n;
    for(int i=0;i<n;i++) {
        int a,b;
        cin >> a >> b;
        cout << pwr(a,b) << endl;
    }
}