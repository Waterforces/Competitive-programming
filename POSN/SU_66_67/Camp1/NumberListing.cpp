#include<bits/stdc++.h>
using namespace std;
int n;
set<int> s;

int main() {
    cin >> n;
    for(int i=0;i<n;i++) {
        int a;
        cin >> a;
        s.insert(a);
    }
    for(int i: s) cout << i << " ";
}