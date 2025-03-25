#include<bits/stdc++.h>
using namespace std;
int n,a,cou;

int main() {
    cin >> n;
    while(cin >> a) {
        if(a==0) break ;
        if(a==n) cou++;
    }
    if(cou) cout << cou;
    else cout << "None";
}