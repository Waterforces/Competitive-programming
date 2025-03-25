#include<bits/stdc++.h>
using namespace std;
double a[25][25],dp[(1<<21)];
int n;

int fn(int x) {
    int cou=0;
    while(x>0) {
        if(x%2==1) cou++;
        x/=2;
    }
    return cou;
}

int main() {
    cin >> n;
    dp[0]=1;
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++) {
            cin >> a[i][j];
            a[i][j]/=100.0;
        }
    }
    for(int i=0;i<(1<<n);i++) {
        for(int j=1;j<=n;j++) {
            // cout << i << " " << j << " " << (1<<(j-1)) << endl;
            if((i&(1<<(j-1)))==0) dp[i|(1<<(j-1))]=max(dp[i|1<<(j-1)],dp[i]*a[fn(i)+1][j]);
        } 
    }
    cout << fixed << setprecision(12) << dp[(1<<n)-1]*100.0;
}
/*
0000
0001
0010
0100
*/