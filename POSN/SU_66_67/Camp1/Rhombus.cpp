#include<bits/stdc++.h>
using namespace std;
int n;

int main() {
    cin >> n;
    int k=(n+1)/2;
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++) {
            if(j<=k-i) cout << " ";
            else if(j-k>=i) cout << " ";
            else if(j+k<=i) cout << " ";
            else if(j-k>=n-i+1) cout << " ";
            else cout << "*";
        }
        cout << "\n";
    }
}