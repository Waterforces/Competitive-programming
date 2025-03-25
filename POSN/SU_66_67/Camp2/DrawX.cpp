#include<bits/stdc++.h>
using namespace std;
int n;
int main() {
    cin >> n;
    if(n%2==0) {
        cout << "error " << n << " is not odd number";
        return 0;
    }
    for(int i=0;i<n;i++) {
        cout << "-";
    }
    cout << endl;
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++) {
            if(i==j && i==n/2+n%2) cout << "X";
            else if(i==j) cout << "\\";
            else if(j==n-i+1) cout << "/";
            else cout << " ";
        }
        cout << endl;
    }
    for(int i=0;i<n;i++) {
        cout << "-";
    }
}
