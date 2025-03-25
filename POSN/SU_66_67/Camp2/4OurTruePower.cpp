#include<bits/stdc++.h>
using namespace std;
int n,t,sum;
vector<int> v;

int main() {
    cin >> n;
    while(n>0) {
        int mod = n%2;
        // cout << mod;
        v.push_back(mod);
        n/=2;
    }
    for(int i=0;i<v.size();i++) sum+=v[i]*(v.size()-i-1);
    cout << sum;
}