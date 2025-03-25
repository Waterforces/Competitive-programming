#include<bits/stdc++.h>
using namespace std;
int n,a[1005][1005];

int main() {
    cin >> n;
    for(int i=0;i<n;i++) {
        for(int j=0;j<i;j++) {
            cin >> a[i][j];
            a[j][i]=a[i][j];
        }
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cout << a[i][j] << " ";
        } 
        cout << "\n";
    }
}