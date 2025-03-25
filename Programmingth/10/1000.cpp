#include<bits/stdc++.h>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n,m;
    cin >> n >> m;
    string s[m],c;
    cin >> c;
    for(int i=1;i<m;i++) {
        cin >> s[i];
    }
    for(int i=1;i<m;i++) {
        int ans=0;
        for(int j=0;j<n;j++) {
            if(c[j]!=s[i][j]) ans++;
        }
        if(ans>2) {
            cout << c;
            return 0;
        }
        for(int j=0;j<n;j++) {
            c[j]=s[i][j];
        }
    }
    cout << c;
}