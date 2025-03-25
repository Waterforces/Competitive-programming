#include<bits/stdc++.h>
using namespace std;
list<int> l;
int n;

int main() {
    while(cin >> n) {
        if(n==0) break ;
        l.push_front(n);
    }
    for(auto x: l) cout << x << " ";
}