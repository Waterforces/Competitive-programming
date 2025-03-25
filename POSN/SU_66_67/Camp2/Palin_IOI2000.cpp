#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;
int n,dp[5005][5005];
string a,b,s;

int main() {
    cin >> n >> a;
    b=a;
    reverse(b.begin(),b.end());
    for(int i=1;i<=a.size();i++) {
        for(int j=1;j<=b.size();j++) {
            if(a[i-1]==b[j-1]) dp[i][j]=dp[i-1][j-1]+1;
            else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
    }
    for(int i=a.size(),j=b.size();i>0 && j>0;) {
        if(a[i-1]==b[j-1]) {
            s+=a[i-1];
            i--; j--;
        }
        else if(dp[i-1][j]>dp[i][j-1]) i--;
        else j--;
    }
}