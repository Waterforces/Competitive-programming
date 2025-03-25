#include<bits/stdc++.h>
using namespace std;
int n;
set<string> se;

int main() {
    cin >> n;
    for(int i=0;i<n;i++) {
        string s;
        cin >> s;
        se.insert(s);
    }
    for(auto i: se) cout << i << "\n";
}