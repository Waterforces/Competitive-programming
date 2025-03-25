#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;
int n,m,cnt,ans,x,y;
vector<vector<int> > dp;
string a,b,s;

int main() {
    cin >> n >> m >> a >> b;
    dp.resize(n+5,vector<int> (m+5,0));
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=m;j++) {
            if(a[i-1]==b[j-1]) {
                dp[i][j]=dp[i-1][j-1]+1;
                if(ans<dp[i][j]) {
                    ans=dp[i][j];
                    x=i,y=j;
                }
            }
            else dp[i][j]=0;
        }
    }
    cout << ans;
    // for(int i=x,j=y;i>0 && j>0;) {
    //     if(dp[i][j]==0) break ;
    //     s+=a[i-1];
    //     i--; j--;
    // }
    // reverse(s.begin(),s.end());
    // cout << endl << s;
}