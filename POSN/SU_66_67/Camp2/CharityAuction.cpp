#include<bits/stdc++.h>
using namespace std;
int n,a[10005],old,sum;

int main() {
    cin >> n;
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=0;i<n;i++) {
        if(a[i]<=old) continue ;
        sum+=a[i];
        old=a[i];
    }
    cout << sum;
}