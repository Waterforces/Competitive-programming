#include<bits/stdc++.h>
using namespace std;
int a[10];
int sum,n;
int main() {
    cin >> n;
    if(n==3) {
        for(int i=0;i<3;i++) {
            int a;
            cin >> a;
            sum+=a;
        }
        cout << sum;
        return 0;
    }
    for(int i=0;i<n;i++) {
        cin >> a[i];
        sum+=a[i];
    }
    sort(a,a+n);
    sum-=(a[0]+a[n-1]);
    cout << sum;
}
