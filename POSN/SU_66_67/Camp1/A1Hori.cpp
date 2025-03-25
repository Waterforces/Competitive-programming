#include<bits/stdc++.h>
using namespace std;
int n,cou=1;

int main() {
    cin >> n;
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=(n+1)/2;j++) {
            if(j<=cou) cout << "A";
            else if(i<(n+1)/2) cout << "1";
            else if(i>(n+1)/2) cout << "*";
        }
        cout << "\n";
        if(i<(n+1)/2) cou++;
        else cou--; 
    }
}