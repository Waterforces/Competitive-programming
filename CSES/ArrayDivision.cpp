#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 2e5+5;
ll n,k,a[N],l=1,r=1e18,ans;
 
int main() {
    cin >> n >> k;
    for(ll i=0;i<n;i++) {
        cin >> a[i];
        l = max(l,a[i]);
    } 
    while(l<r) {
        ll mid = (l+r)/2,sum=0,cnt=0;
        for(int i=0;i<n;i++) {
            if(sum+a[i]>mid) {
                sum=0;
                cnt++;
            }
            sum+=a[i];
        }
        if(cnt>=k) l = mid+1;
        else r = mid;
    }
    cout << l;
}