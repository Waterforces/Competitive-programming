#include<bits/stdc++.h>
using namespace std;
int n,m,a[1005][1005],maxrow[1005],maxcolum[1005],minrow[1005],mincolum[1005];
bool check;

int main() {
    cin >> n >> m;
    for(int i=0;i<n;i++) {
        minrow[i]=INT_MAX;
        for(int j=0;j<m;j++) {
            cin >> a[i][j];
            minrow[i]=min(minrow[i],a[i][j]);
            maxrow[i]=max(maxrow[i],a[i][j]);
        }
    }
    for(int i=0;i<m;i++) {
        mincolum[i]=INT_MAX;
        for(int j=0;j<n;j++) {
            mincolum[i]=min(mincolum[i],a[j][i]);
            maxcolum[i]=max(maxcolum[i],a[j][i]);
        }
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            // cout << minrow[i] << " " << maxrow[i] << " " << mincolum[j] << " " << maxcolum[j] << " " << a[i][j] << "\n";
            if((a[i][j]==maxrow[i] && a[i][j]==mincolum[j]) || (a[i][j]==minrow[i] && a[i][j]==maxcolum[j])) {
                check=1;
                printf("(%d, %d) = %d\n",i,j,a[i][j]);
                // cout << "(" << i << ", " << j << ") = " << a[i][j];
            }
        }
    }
    if(!check) cout << "None";
}