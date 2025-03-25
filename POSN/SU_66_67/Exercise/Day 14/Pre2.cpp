#include<bits/stdc++.h>
using namespace std;
int n;

int main() {
    cin >> n;
    int t=n*2+(2*(n-1));
    for(int i=1;i<=n;i++) {
        for(int j=n;j>i;j--) {
            cout << " ";
        }
        cout << "*";
        for(int j=1;j<i;j++) {
            cout << "*";
        }
        for(int j=1;j<i;j++) {
            cout << "*";
        }
        for(int j=1;j<=n-i;j++) {
            cout << " ";
        }
        for(int j=n;j>i;j--) {
            cout << " ";
        }
        cout << "*";
        for(int j=1;j<i;j++) {
            cout << "*";
        }
        for(int j=1;j<i;j++) {
            cout << "*";
        }
        cout << "\n";
    }
}

/*
 *  *
******
*/

/*
1*2+0
2*2+2
3*2+4
4*2+6
*/