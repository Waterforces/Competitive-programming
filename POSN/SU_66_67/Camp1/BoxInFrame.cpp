#include<bits/stdc++.h>
using namespace std;
int n;

int main() {
    cin >> n;
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++) {
            if((i==2 || i==n-1) && (j!=1 && j!=n)) cout << " ";
            else if((j==2 || j==n-1) && (i!=1 && i!=n)) cout << " ";
            else cout << "*";
        }
        cout << "\n";
    }
}