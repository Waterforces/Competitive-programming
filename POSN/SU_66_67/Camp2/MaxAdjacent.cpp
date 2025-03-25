#include<bits/stdc++.h>
using namespace std;
int n;
vector<int> v;

int main() {
    v.push_back(INT_MIN);
    cin >> n;
    v.push_back(n);
    while(cin >> n ) {
        if(v[v.size()-1]>v[v.size()-2] && v[v.size()-1]>n) cout << v[v.size()-1] << " ";
        v.push_back(n);
    }
    if(v[v.size()-1]>v[v.size()-2]) cout << v[v.size()-1];
}