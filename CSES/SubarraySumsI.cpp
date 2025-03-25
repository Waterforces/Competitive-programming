#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;
const int N = 2e5+5;
ll n,m,a[N],sum,cou,l,r;
 
int main() {
    cin >> n >> m;
    for(ll i=0;i<n;i++) cin >> a[i];
    while(l<n || r<n) {
        if(sum==m) cou++;
        // cout << l << " " << r << " " << sum << " " << cou << endl;
        if(sum>m || r>=n) {
             sum-=a[l];
             l++;
        }
        else {
            if(r<n) sum+=a[r];
            r++;
        }
    }
    cout << cou;
    // cout << l << " " << r;
}