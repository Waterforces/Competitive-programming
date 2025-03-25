#include<bits/stdc++.h>
using namespace std;
int dp[3005],n,h,q,cou0,cou50;

int main() {
    cin >> n >> h >> q;
    for(int i=0;i<q;i++) {
        int a,b;
        cin >> a >> b;
        dp[a]++;
        dp[a+b]--;
    }
    for(int i=1;i<n;i++) dp[i]+=dp[i-1];
    for(int i=0;i<n;i++) {
        if(dp[i]==0) cou0++;
        else if(dp[i]==1) cou50++;
    }
    cout << cou0*h << " " << cou50*h;
}