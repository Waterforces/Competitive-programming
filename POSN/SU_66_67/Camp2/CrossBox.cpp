#include<bits/stdc++.h>
using namespace std;
int n;
int main() {
    cin >> n;
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++) {
            if(i==j) cout << "*";
            else if(i==1 || j==1 || i==n || j==n) cout << "*";
            else if(j==n-i+1) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }
}
