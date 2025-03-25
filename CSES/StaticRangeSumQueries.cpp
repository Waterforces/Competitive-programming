#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll a[200005];
ll n,m;
ll dp[200005];
int main()
{
    cin >> n >> m;
    for(int i=1;i<=n;i++) {
        cin >> a[i];
        dp[i]=a[i]+dp[i-1];
    }
    for(int i=0;i<m;i++) {
        int x,y;
        ll sum=0;
        cin >> x >> y;
        sum=dp[y]-dp[x-1];
        cout << sum << endl;
    }
}
 
 
/*
8 4
3 2 4 5 1 1 5 3
2 4
5 6
1 8
3 3
*/