#include<bits/stdc++.h>
using namespace std;
int n;

int main() {
    cin >> n;
    for(int i=1;i<=n*2-1;i++) {
        for(int j=1;j<=n*2-1;j++) {
            if(i==n) cout << "*";
            else if(j==n-i+1) cout << "*";
            else if(j==n+i-1) cout << "*";
            else if(i==(n*2-1)-n+j) cout << "*";
            else if(i==(n*2-1)-j+n) cout << "*";
            else cout << " ";
        }
        cout << "\n";
    }
}