#include<bits/stdc++.h>
#define ll long long
using namespace std;
map<ll,int> mp;
ll n,k,a[1005],_min=INT_MAX,x,y;

int main() {
    cin >> k >> n;
    for(int i=0;i<n;i++) {
        cin >> a[i];
        mp[a[i]]=i+1;
    }
    sort(a,a+n);
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            ll t=a[i]+a[j];
            ll near=abs(k-t);
            // cout << "" << a[i] << " " << a[j] << " " << mp[a[i]] << " " << mp[a[j]] << "\n";
            // cout << near << " " << _min << "\n";
            if(near<_min) {
                _min=near;
                x=i;
                y=j;
            }
            else if(near==_min) {
                if(a[y]-a[x]>a[j]-a[i]) {
                    x=i;
                    y=j;
                }
            }
         }
    }
    cout << a[x]+a[y] << "\n" << a[x] << " " << a[y];
}