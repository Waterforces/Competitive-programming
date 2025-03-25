#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n,a[200005],cou;
 
int main() {
    cin >> n >> a[1]; 
    for(int i=2;i<=n;i++) {
        cin >> a[i];
        if(a[i-1]>a[i]) {
            cou+=a[i-1]-a[i];
            a[i]=a[i-1];
        }
    }
    cout << cou;
}