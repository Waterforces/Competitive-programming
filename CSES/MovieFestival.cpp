#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;
int n,cnt,tmp;
vector<pair<int,int> > v;
 
int main() {
    cin >> n;
    for(int i=0;i<n;i++) {
        int a,b;
        cin >> a >> b;
        v.push_back({b,a});
    }
    sort(v.begin(),v.end());
    for(auto [s,f]: v) {
        if(f>=tmp) {
            tmp=s;
            cnt++;
        }
    }
    cout << cnt;
}
