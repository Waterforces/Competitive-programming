#include<bits/stdc++.h>
using namespace std;
int dp[1005][1005];
string s1,s2,ans;

int main() {
    cin >> s1 >> s2;
    for(int i=1;i<=s1.size();i++) {
        for(int j=1;j<=s2.size();j++) {
            if(s1[i-1]==s2[j-1]) dp[i][j]=dp[i-1][j-1]+1;
            else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
    }
    for(int i=s1.size(),j=s2.size();i>=1 && j>=1;) {
        if(s1[i-1]==s2[j-1]) {
            ans+=s1[i-1];
            i--; j--;
        }
        else if(dp[i-1][j]>dp[i][j-1]) i--;
        else j--;
    }
    reverse(ans.begin(),ans.end());
    cout << ans << endl << ans.size() << endl;
    if(ans.size()<s1.size()/2) cout << "n";
    else cout << "y";
}