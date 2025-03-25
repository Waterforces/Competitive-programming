#include<bits/stdc++.h>
using namespace std;
int n,sum,a[105],b[105];

int main() {
    cin >> n;
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=0;i<n;i++) cin >> b[i];
    for(int i=0;i<n;i++) sum+=(a[i]*b[i]);
    cout << sum;
}