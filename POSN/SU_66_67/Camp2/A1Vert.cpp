#include<bits/stdc++.h>
using namespace std;
int n;
int main() {
    cin >> n;
    for(int i=1;i<=n/2+n%2;i++) {
        for(int j=1;j<i;j++) {
            cout << "1";
        }
        for(int j=1;j<=n-2*i+2;j++) {
            cout << "A";
        }
        for(int j=1;j<i;j++) {
            cout << "*";
        }
        cout << endl;
    }
}
