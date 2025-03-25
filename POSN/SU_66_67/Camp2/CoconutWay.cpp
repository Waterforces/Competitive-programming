#include<bits/stdc++.h> //set Xl-Xb sort x
using namespace std;
int n,m;
set<pair<int,int>> se;
int a[100005];

int main() {
    cin >> n >> m;
    for(int i=1;i<=n;i++) {
        cin >> a[i];
        se.insert({a[i],i});
    }
    for(int i=0;i<m;i++) {
        int x,b;
        cin >> x >> b;
        se.erase({a[x],x});
        a[x]=b;
        se.insert({a[x],x});
        cout << se.rbegin()->first-se.begin()->first << "\n";
    }
}
