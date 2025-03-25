#include<bits/stdc++.h>
using namespace std;
int n,a[105][105],sum;

int main() {
    cin >> n;
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cin >> a[i][j];
        }
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<i;j++) {
            // cout << a[i][j] << "\n";
            sum+=abs(a[j][i]-a[i][j]);
        }
    }
    cout << sum;
}