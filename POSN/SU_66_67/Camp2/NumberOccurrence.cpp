#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector<int> v[1005];
int n,k;
int main() {
    cin >> n;
    for(int i=1;i<=n;i++) {
        int a;
        cin >> a;
        v[a].push_back(i);
    }
    cin >> k;
    int x=v[k].size();
    if(x==0) {
        cout << 0;
        return 0;
    }
    for(int i=0;i<x;i++) {
        cout << v[k][i];
        if(i<x-1) cout << " ";
    }
}

