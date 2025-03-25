#include<bits/stdc++.h>
using namespace std;
int n;

int main() {
    cin >> n;
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++) {
            if(i==1 || i==n) cout << "X";
            else if(i==j) cout << "X";
            else if(n-i+1==j) cout << "X";
            else cout << " ";
        }
        cout << "\n";
    }
}