#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;
int n;
queue<pair<int,int> > q;

int main() {
    cin >> n;
    while(n--) {
        string a,b;
        cin >> a >> b;
        int dp[1205][1205]={0};
        bool visited[1205][1205]={0};
        for(int i=1;i<=a.size();i++) {
            for(int j=1;j<=b.size();j++) {
                if(a[i-1]==b[j-1] || toupper(a[i-1])==b[j-1]) dp[i][j]=dp[i-1][j-1]+1;
                else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        bool ans=0;
        q.push({a.size(),b.size()});
        visited[a.size()][b.size()]=1;
        while(!q.empty()) {
            // auto [i,j] = q.front(); q.pop();
            int i = q.front().first, j = q.front().second; q.pop();
            if(i==0 && j==0) {
                ans=1;
                break ;
            } 
            if(i<=0 && j<=0) continue ;
            if(a[i-1]==b[j-1] || toupper(a[i-1])==b[j-1]) {
                if(!visited[i-1][j-1]) {
                    visited[i-1][j-1]=1;
                    q.push({i-1,j-1});
                }
            }
            if(a[i-1]>='a' && a[i-1]<='z' && dp[i][j]==dp[i-1][j]) {
                if(!visited[i-1][j]) {
                    visited[i-1][j]=1;
                    q.push({i-1,j});
                }
            }
        }
        if(ans) cout << "YES\n";
        else cout << "NO\n";
        while(!q.empty()) q.pop();
     }
}