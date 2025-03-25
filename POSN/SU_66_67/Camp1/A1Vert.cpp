#include<bits/stdc++.h>
using namespace std;
int n;

int main() {
    cin >> n;
    for(int i=1;i<=(n+1)/2;i++) {
        for(int j=1;j<=n;j++) {
            if(j+1<=i) cout << "1";
            else if(n-i+1>=j) cout << "A";
            else cout << "*";
        }
        cout << "\n";
    }
}