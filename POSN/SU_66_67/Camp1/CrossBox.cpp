#include<bits/stdc++.h>
using namespace std;
int n;

int main() {
    cin >> n;
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++) {
            if(i==j) cout << "*";
            else if(n-i+1==j) cout << "*";
            else if(i==1 || i==n) cout << "*";
            else if(j==1 || j==n) cout << "*";
            else cout << " ";
        }
        cout << "\n";
    }
}