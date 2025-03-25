#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 5005;
int n,k,c,l,h,a[N],dp[5005][5005];
bool ch[N][N];

int main() {
    cin >> n >> k >> c;
    for(int i=1;i<=n;i++) cin >> a[i];
    cin >> l >> h;
    for(int i=1;i<=n;i++) {
        int sum=0;
        for(int j=i;j<=n;j++) {
            sum+=a[j]*pow(j-i,c);
            if(sum<=h && sum>=l) {
                if(i==1) dp[i][j]=1;
                ch[i][j]=1;
            }
        }
    }
    for(int i=2;i<=k;i++) {
        for(int j=1;j<=n;j++) {
            int sum=0;
            for(int l=1;l<=j;l++) {
                if(ch[l][j]) sum+=dp[i-1][l-1];
            }
            dp[i][j]=sum;
        }
    }
    // cout << dp[k][n];
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++) cout << ch[i][j] << " ";
        cout << endl;
    }
}
/*
​11	5	2
 1	2	3	4	5	6	7	8	9	10	11
 5	20
11 5 2
1 2 3 4 5 6 7 8 9 10 11
5 20
*/