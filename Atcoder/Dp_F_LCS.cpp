#include<bits/stdc++.h>
using namespace std;
string a,b,s;
int dp[3005][3005];

int main() {
    cin >> a >> b;
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
    reverse(s.begin(),s.end());
    cout << s;
}