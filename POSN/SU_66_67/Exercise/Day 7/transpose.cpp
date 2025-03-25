#include<bits/stdc++.h>
using namespace std;
int n,m,a[100][100];

int main() {
    cin >> n >> m;
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cin >> a[i][j];
        }
    }
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            cout << a[j][i] << " ";
        }
        cout << "\n";
    }
}