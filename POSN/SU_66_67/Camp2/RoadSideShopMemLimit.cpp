#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;
int n,k,ans;
vector<int> qs;

int main() {
    cin >> n >> k;
    qs.resize(n+5);
    for(int i=1;i<=n;i++) {
        int a;
        cin >> a;
        qs[i]=qs[i-1]+a;
    }
    for(int i=1;i<=n;i++) {
        int a,b;
        if(i-k-1>0) a=i-k-1;
        else a=0;
        if(i+k<=n) b=i+k;
        else b=n;
        // cout << a << " " << b << " " << qs[b] << " " << qs[a] << endl;
        ans=max(ans,qs[b]-qs[a]);
    }
    cout << ans;
}