#include<bits/stdc++.h>
using namespace std;
const int N=1e4+5;
int n,a[N],l[N],r[N];
long long ans;
int main() {
    cin >> n;
    for(int i=1;i<=n;i++) cin >> a[i];
    a[0]=INT_MIN;
    for(int i=1;i<=n;i++) {
        if(a[i]>a[i-1]) l[i]=l[i-1]+1;
        else if(a[i]==a[i-1]) l[i]=l[i-1];
        else l[i]=1;
    }
    a[n+1]=INT_MIN;
    for(int i=n;i>=1;i--) {
        if(a[i]>a[i+1]) r[i]=r[i+1]+1;
        else if(a[i]==a[i+1]) r[i]=r[i+1];
        else r[i]=1;
    }
    for(int i=1;i<=n;i++) {
        ans+=max(l[i],r[i]);
    }
    cout << ans*1000;
}