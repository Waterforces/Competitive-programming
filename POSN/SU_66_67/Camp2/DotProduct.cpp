#include<bits/stdc++.h>
using namespace std;
int a[100],b[100];
int sum,n;
int main() {
    cin >> n;
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }
    for(int j=0;j<n;j++) {
        cin >> b[j];
    }
    for(int i=0;i<n;i++) {
        sum+=a[i]*b[i];
    }
    cout << sum;
//dot_product
}
