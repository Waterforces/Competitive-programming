#include<bits/stdc++.h>
using namespace std;
int k,n,m,a[100][100],x8[8]={1,-1,0,0,1,1,-1,-1},y8[8]={0,0,1,-1,1,-1,1,-1};
vector<int> ans;
queue<pair<int,int> > q;

int main() {
    cin >> n >> m;
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cin >> a[i][j];
        }
    }
    cin >> k;
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            if(a[i][j]<=k) {
                int cou=1;
                q.push({i,j});
                a[i][j]=100;
                while(!q.empty()) {
                    // auto [x,y] = q.front(); q.pop();
                    int x = q.front().first, y = q.front().second; q.pop();
                    for(int l=0;l<8;l++) {
                        if(x+x8[l]<0 || y+y8[l]<0 || x+x8[l]>=n || y+y8[l]>=m || a[x+x8[l]][y+y8[l]]>k) continue ;
                        cou++;
                        // cout << x+x8[l] << " " << y+y8[l] << endl;
                        q.push({x+x8[l],y+y8[l]});
                        a[x+x8[l]][y+y8[l]]=100;
                    }
                }
                ans.push_back(cou);
            }
        }
    }
    sort(ans.begin(),ans.end());
    cout << ans.size() << endl;
    for(auto x: ans) cout << x << endl;
}