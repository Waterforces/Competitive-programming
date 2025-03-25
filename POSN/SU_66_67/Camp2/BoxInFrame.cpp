#include<bits/stdc++.h>
using namespace std;
int n;
int main() {
    cin >> n;
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++) {
            if(i==1 || j==1 || j==n || i==n) cout << "*";
            else if(i==2 || j==2 || j==n-1 || i==n-1) cout << " ";
            else cout << "*";
        }
        if(i<n) cout << endl;
    }
}
