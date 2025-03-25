#include<bits/stdc++.h>
using namespace std;
int n;
int main() {
    cin >> n;
    int x=n/2;
    for(int i=0;i<n;i++) {
        if(i<=x) {
            for(int j=0;j<=i;j++) {
                cout << "A";
            }
            for(int j=x;j>i;j--) {
                cout << 1;
            }
        }
        else {
            for(int j=0;j<=n-i-1;j++) {
                cout << "A";
            }
            for(int j=x;j>n-i-1;j--) {
                cout << "*";
            }
        }
        cout << endl;
    //1A*
    }
}
