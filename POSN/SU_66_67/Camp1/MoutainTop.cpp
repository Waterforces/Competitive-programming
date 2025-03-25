#include<bits/stdc++.h>
using namespace std;
int n,a[1005][1005],cou;
vector<pair<int,int> > v;

int main() {
    cin >> n;
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cin >> a[i][j];
        }
    }
    for(int i=1;i<n-1;i++) {
        for(int j=1;j<n-1;j++) {
            if(a[i][j]>a[i][j+1] && a[i][j]>a[i][j-1] && a[i][j]>a[i+1][j] && a[i][j]>a[i-1][j] && a[i][j]>a[i+1][j+1] && a[i][j]>a[i+1][j-1] && a[i][j]>a[i-1][j+1] && a[i][j]>a[i-1][j-1]) {
                cou++;
                v.push_back({i,j});
            }
        }
    }
    cout << cou << '\n';
    for(int i=0;i<v.size();i++) {
        int x=v[i].first,y=v[i].second;
        cout << a[x][y] << " " << x << " " << y << "\n";
    }
}