#include<bits/stdc++.h>
using namespace std;
int n,m,a[1005][1005],b[1005][1005],sum[1005];

int main() {
    cin >> n >> m;
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cin >> b[i][j];
        }
    }
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            a[i][j]=b[j][i];
            sum[i]+=a[i][j];
        } sort(a[i],a[i]+n);
    }
    for(int i=0;i<m;i++) {
        for(int j=i+1;j<m;j++) {
            if(sum[i]>sum[j]) {
                swap(sum[i],sum[j]);
                swap(a[i],a[j]);
            }
        }
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cout << a[j][i] << " ";
        }
        cout << endl;
    }
}