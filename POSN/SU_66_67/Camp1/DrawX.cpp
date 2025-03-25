#include<bits/stdc++.h>
using namespace std;
int n;

int main() {
    cin >> n;
    if(n%2==0) {
        cout << "error " << n << " is not odd number";
        return 0;
    }
    for(int i=1;i<=n+2;i++) {
        for(int j=1;j<=n;j++) {
            if(i==1 || i==n+2) cout << "-";
            else if(i==(n+1)/2+1 && j==(n+1)/2) cout << "X";
            else if(i-1==j) cout << "\\";
            else if(n-i+2==j) cout << "/";
            else cout << " ";
        }
        cout << "\n";
    }
}